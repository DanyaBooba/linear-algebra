#include "cstring"
#include "iostream"

using namespace std;
#include "func.h"
#include "lib.h"


int main(int argc, char ** argv) {
    printHello(argc, argv);

    int spaceDimensionality = 10;
    enterValue("Введите размерность пространства [2-100]", &spaceDimensionality, 2, 100);

    int maximumDegree = 2;
    enterValue("Введите максимальную степень [0-10]", &spaceDimensionality, 0, 10);

    return 0;
}
