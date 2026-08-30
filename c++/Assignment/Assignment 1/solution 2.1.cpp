//============================================================================
// Name        : 1.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Original bug Call by Value
void resetSensorPairV1(int reading1, int reading2) {
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}

// Fix 1  Call by Reference
void resetSensorPairV2(int& reading1, int& reading2) {
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}

// Fix 2 Call by Pointer
void resetSensorPairV3(int* reading1, int* reading2) {
    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;
}

int main() {
    int reading1 = 55;
    int reading2 = 12;
    //calling the first function
    cout << "--- V1: Call by Value ---" << endl;
    cout << "Before : " << "A =" << reading1 << "\t B = " << reading2 << endl;
    resetSensorPairV1(reading1, reading2);
    cout << "After : " << "A =" << reading1 << "\t B = " << reading2;
    cout << " \t <- values unchanged" << endl;

    cout << "--- V2: Call by reference ---" << endl;
    cout << "Before : " << "A =" << reading1 << "\t B = " << reading2 << endl;
    resetSensorPairV2(reading1, reading2);
    cout << "After : " << "A =" << reading1 << "\t B = " << reading2;
    cout << " \t <- values swapped" << endl;

    cout << "--- V3: Call by pointer ---" << endl;
    cout << "Before : " << "A =" << reading1 << "\t B = " << reading2 << endl;
    resetSensorPairV3(&reading1, &reading2);
    cout << "After : " << "A =" << reading1 << "\t B = " << reading2;
    cout << " \t <- values swapped back" << endl;
    return 0;
}
