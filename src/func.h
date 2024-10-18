void printHelp();

void enterValue(string placeholder, int * data, int min=INT_MIN, int max=INT_MAX) {
    while(1) {
        cout << placeholder << ":" << endl << "> ";
        scanf("%d", data);
        if((*data) < min || (*data) > max) {
            cout << endl << "Пожалуйста, введите значения в диапазоне [" << min << "-" << max << "]" << endl;
        }
        else {
            break;
        }
    }
}

void printHello(int argc, char ** argv) {
    cout << "Приложение линейной алгебры." << endl;

    if(argc == 2 && (!strcmp(argv[1], "-h") || !strcmp(argv[1], "-help"))) {
        printHelp();
    }

    cout << endl;
}

void printHelp() {
    cout << endl << "Добро пожаловать в программу для подсчета линейных уравнений в выбранном пространстве.";
    cout << endl << endl << "Первым параметром укажите размерность пространства, в котором будет работать программа.";
    cout << endl << endl << "Второй параметр отвечает за степень, до которой дойдет программа и найдет корни уравнений." << endl;
}
