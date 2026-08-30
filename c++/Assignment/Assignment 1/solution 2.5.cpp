//============================================================================
// Name        : 5.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
inline double distanceBetween(double x1, double y1, double x2, double y2){
  return sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
}
inline double toRadians(double degrees){
	return degrees * (M_PI / 180.0);
}
inline double clamp(double value, double minVal, double maxVal) {
// Restrict value to [minVal, maxVal]

if (value < minVal){
	return minVal;
}

if (value > maxVal){
	return maxVal;
}
	return value;
}
inline bool isInSafeZone(double x, double y, double cx, double cy, double radius){
	return distanceBetween(x, y, cx, cy) <= radius;
	// true if point (x,y) is within the circle centred at (cx,cy) with given radius
}

// degrees * (M_PI / 180.0)
int main() {

	    // Home position
	    double homeX = 0.0;
	    double homeY = 0.0;

	    // Safe-zone radius
	    double radius = 50.0;

	    // Three waypoints
	    double x1 = 30.0, y1 = 40.0;
	    double x2 = 60.0, y2 = 0.0;
	    double x3 = -20.0, y3 = 10.0;

	    cout << "Waypoint 1:" << endl;
	    cout << "Distance from home: "
	         << distanceBetween(homeX, homeY, x1, y1) << endl;
	    cout << "Inside safe zone: "
	         << (isInSafeZone(x1, y1, homeX, homeY, radius) ? "Yes" : "No")
	         << endl;

	    cout << endl;

	    cout << "Waypoint 2:" << endl;
	    cout << "Distance from home: "
	         << distanceBetween(homeX, homeY, x2, y2) << endl;
	    cout << "Inside safe zone: "
	         << (isInSafeZone(x2, y2, homeX, homeY, radius) ? "Yes" : "No")
	         << endl;

	    cout << endl;

	    cout << "Waypoint 3:" << endl;
	    cout << "Distance from home: "
	         << distanceBetween(homeX, homeY, x3, y3) << endl;
	    cout << "Inside safe zone: "
	         << (isInSafeZone(x3, y3, homeX, homeY, radius) ? "Yes" : "No")
	         << endl;



	return 0;
}
