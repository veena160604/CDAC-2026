//============================================================================
// Name        : 4.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool parsePacket(const int* rawData,int size,int** outMin,int** outMax){
// If size <= 0 : return false, leave output pointers unchanged
    if(size <= 0)
	return false;

    // Otherwise : set *outMin to point at the minimum element in rawData
    const int* minptr=rawData;
    const int* maxptr=rawData;

    for(int i=0;i<size;i++){
    	if(rawData[i] < * minptr){
    		minptr=&rawData[i];
    	}
    	if(rawData[i] > * maxptr){
    	   	maxptr=&rawData[i];
    	}
    }
    // set *outMax to point at the maximum element in rawData
    // return true
    *outMin = const_cast<int*>(minptr);
    *outMax = const_cast<int*>(maxptr);
    return true;
    };



int main() {
	int packet[] = {45,12,67,8,55,31};
	int* minPtr =nullptr;
	int* maxPtr =nullptr;
	if(parsePacket(packet,6, &minPtr, &maxPtr)){
		cout <<"Calibration Min : "<< *minPtr << endl; cout <<"Calibration Max : "<< *maxPtr << endl;}
    return 0;
}
