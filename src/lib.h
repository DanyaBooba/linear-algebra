void printSpaceNumbers(int spaceNumbers[], int len) {
    for(int i = 0; i < len; i++) {
        cout << spaceNumbers[i] << endl;
    }
}

void enterSpaceNumbers(int spaceNumbers[], int len) {
    for(int i = 0; i < len; i++) {
        spaceNumbers[i] = i;
    }
}

int mult(int a, int b, int n) {
    return (a * b) % n;
}

int sum(int a, int b, int n) {
    return (a + b) % n;
}

void findRootDegree1(int * root, bool * hasRoot, int spaceNumbers[], int len, int a = 1, int b = 0) {
    // ax + b = 0
    int tryFind = -1;
    for(int i = 0; i < len; i++) {
        tryFind = spaceNumbers[i];
        int s = sum(mult(a, tryFind, len), b, len);
        if(s == 0) {
            *hasRoot = true;
            *root = tryFind;
            break;
        }
    }
}

void findRootDegree2WithoutX(int * root1, int * root2, bool * hasRoot, int spaceNumbers[], int len, int a = 1, int b = 0) {
    // ax² + b = 0
    int tryFind = -1;
    bool has = false;
    for(int i = 0; i < len; i++) {
        tryFind = spaceNumbers[i];
        int s = sum(mult(a, mult(tryFind, tryFind, len), len), b, len);
        if(s == 0) {
            has = true;
            *hasRoot = true;
            *root1 = tryFind;
            break;
        }
    }

    if(has == false) {
        *hasRoot = false;
    }

    has = false;
    for(int i = (*root1) + 1; i < len; i++) {
        tryFind = spaceNumbers[i];
        int s = sum(mult(a, mult(tryFind, tryFind, len), len), b, len);
        if(s == 0) {
            has = true;
            *root2 = tryFind;
            break;
        }
    }

    if(has == false) {
        *root2 = *root1;
    }
}

//
// Корни
//

void printRootsConstant(int spaceNumbers[], int len) {
    cout << "Корни константы: " << endl;
    for(int i = 0; i < len; i++) {
        cout << spaceNumbers[i] << ((i + 1) < len ? ", " : "");
    }
    cout << endl << endl;
}

void printRootsOfDegree1(int spaceNumbers[], int len) {
    cout << "Корни 1 степени: " << endl;
    for(int i = 1; i < len; i++) cout << i << "x = 0; x = 0" << endl;

    for(int a = 1; a < len; a++) {
        for(int b = 1; b < len; b++) {
            bool hasRoot = false;
            int root = -1;
            findRootDegree1(&root, &hasRoot, spaceNumbers, len, a, b);
            cout << a << "x + " << b << " = 0; ";
            if(hasRoot) {
                cout << "x = " << root;
            }
            else {
                cout << "нет корней";
            }
            cout << endl;
        }
    }
    cout << endl << endl;
}

void printRootsOfDegree2(int spaceNumbers[], int len) {
    cout << "Корни 2 степени: " << endl;

    for(int a = 1; a < len; a++) {
        bool hasRoots = true;
        int root1 = -1;
        int root2 = -1;
        findRootDegree2WithoutX(&root1, &root2, &hasRoots, spaceNumbers, len, a);
        cout << a << "x² = 0; ";
        if(hasRoots) {
            cout << "x={" << root1 << ", " << root2 << "}";
        }
        else {
            cout << "нет корней";
        }
        cout << endl;
    }

    for(int a = 1; a < len; a++) {
        for(int b = 1; b < len; b++) {
            cout << a << "x² + " << b << " = 0; ";
            cout << endl;
        }
    }

    cout << endl << endl;
}
