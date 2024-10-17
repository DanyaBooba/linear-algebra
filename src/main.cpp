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
    // enterValue("Введите максимальную степень [0-10]", &spaceDimensionality, 0, 10);

    //
    // Начало работы программы
    //

    int spaceNumbers[spaceDimensionality];
    enterSpaceNumbers(spaceNumbers, spaceDimensionality);
    printSpaceNumbers(spaceNumbers, spaceDimensionality);

    return 0;
}
