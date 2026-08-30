//============================================================================
// Name        : 3.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int statusReg = 0b10110001; // Read-only from firmware side
	int controlReg = 0b00000000; // Firmware writes here
	int dataReg = 0b11001010;// For reassignment demo

	// regPtr1
	const int *regptr1 = &statusReg;
	cout << "statusReg = " << *regptr1 << endl;
	//*regptr1 =11;      // error: error: assignment of read-only location '* regptr1'
	//cout << "statusReg = " << *regptr1 << endl;

	// regptr2
    int*const regptr2 = &controlReg;
    cout << "controlReg = " << *regptr2 << endl;
    *regptr2=0b00000001;
    //*regptr2 =&dataReg;  //error: assignment of read-only location '* regptr2'
    cout << "controlReg = " << *regptr2 << endl;

    // regptr3
    const int* const regptr3 = &statusReg;
    //int*const regptr3 = &dataReg;//error: conflicting declaration 'int* const regptr3'
    cout << "controlReg = " << *regptr3 << endl;
    //*regptr3=0b00000001;////error: assignment of read-only location '*(const int*)regptr3'
    cout << "controlReg = " << *regptr3 << endl;
	return 0;
}
