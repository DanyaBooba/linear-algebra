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

void findRoot(int * root, bool * hasRoot, int spaceNumbers[], int len, int a = 1, int b = 0) {
    // ax + b
    int tryFind = -3;
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

//
// Корни
//

void printConstantRoots(int spaceNumbers[], int len) {
    cout << "Корни константы: " << endl;
    for(int i = 0; i < len; i++) {
        cout << spaceNumbers[i] << ((i + 1) < len ? ", " : "");
    }
    cout << endl << endl;
}

void printRootsOfDegree1(int spaceNumbers[], int len) {
    cout << "Корни 1 степени: " << endl;
    for(int i = 1; i < len; i++) cout << i << "x = 0; x = 0" << endl;

    for(int i = 1; i < len; i++) {
        bool hasRoot = false;
        int root = -1;
        findRoot(&root, &hasRoot, spaceNumbers, len, 1, i);
        cout << "x + " << i << " = 0; ";
        if(hasRoot) {
            cout << "x = " << root;
        }
        else {
            cout << "нет корней";
        }
        cout << endl;
    }
    cout << endl << endl;
}
