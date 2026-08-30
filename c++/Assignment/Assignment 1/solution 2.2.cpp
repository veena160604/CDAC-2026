//============================================================================
// Name        : 2.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

// Returns sqrt( sum of (each element squared) / n )
double computeRMS(double *signal, int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (*(signal + i)) * (*(signal + i));
    }

    return sqrt(sum / n);
}

// Divides every element by the max absolute value
void normalise(double *signal, int n)
{
    double maxAbs = 0;

    // Find maximum absolute value
    for (int i = 0; i < n; i++)
    {
        if (fabs(*(signal + i)) > maxAbs)
        {
            maxAbs = fabs(*(signal + i));
        }
    }

    // Divide every element by maximum absolute value
    if (maxAbs != 0)
    {
        for (int i = 0; i < n; i++)
        {
            *(signal + i) = *(signal + i) / maxAbs;
        }
    }
}

// Returns count of positions where adjacent elements have opposite signs
int countZeroCrossings(double *signal, int n)
{
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if ((*(signal + i) > 0 && *(signal + i + 1) < 0) ||
            (*(signal + i) < 0 && *(signal + i + 1) > 0))
        {
            count++;
        }
    }

    return count;
}

// Multiplies every element by gainFactor
void applyGain(double *signal, int n, double gainFactor)
{
    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}

// Prints the array
void printArray(double *signal, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }
    cout << endl;
}

int main()
{
    double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
    int n = 7;

    cout << "--- Original Signal ---" << endl;
    printArray(signal, n);

    cout << "\nRMS = " << computeRMS(signal, n) << endl;

    cout << "Zero Crossings = "
         << countZeroCrossings(signal, n) << endl;

    cout << "\n--- After Normalisation ---" << endl;
    normalise(signal, n);
    printArray(signal, n);

    cout << "\n--- After Applying Gain (2.0) ---" << endl;
    applyGain(signal, n, 2.0);
    printArray(signal, n);

    return 0;
}

