#include "cstring"
#include "iostream"

using namespace std;
#include "func.h"
#include "lib.h"

int main(int argc, char ** argv) {

    //
    // Приветствие пользователя, обработка флагов
    //

    printHello(argc, argv);

    //
    // Ввод параметров для управления работы программой
    //

    int spaceDimensionality = 3;
    // enterValue("Введите размерность пространства [2-100]", &spaceDimensionality, 2, 100);

    int maximumDegree = 2;
    // enterValue("Введите максимальную степень [0-2]", &spaceDimensionality, 0, 2);

    //
    // Начало работы программы
    //

    int spaceNumbers[spaceDimensionality];
    enterSpaceNumbers(spaceNumbers, spaceDimensionality);

    //
    // Корни константы
    //

    printRootsConstant(spaceNumbers, spaceDimensionality);

    //
    // Корни 1 степени
    //

    if(maximumDegree >= 1) {
        printRootsOfDegree1(spaceNumbers, spaceDimensionality);
    }

    //
    // Корни 2 степени
    //

    if(maximumDegree >= 2) {
        printRootsOfDegree2(spaceNumbers, spaceDimensionality);
    }

    return 0;
}
