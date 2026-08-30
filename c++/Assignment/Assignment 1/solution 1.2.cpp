#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double readings[100];
    cout << "enter the number of readings" << endl;
    cin >> n;

    if (n<0 || n > 100){
        cout << "invalid numbers of readings " << endl;
        return 1;
    }
   
    for(int i=0;i<n;i++){
        cin>>readings[i];
    }cout << "readings entered :" << n << endl;
     int errors=0;
     cout << "valid readings :" ;
     for (int i=0;i<n;i++){
        if(readings[i]<0){
            errors++;
            continue;
        } 
          cout <<  readings[i] << " ";
    
     } cout << endl;
     cout << "Skipped (errors) : " << errors << endl;
     int First_critical=-1;
     
     for (int i=0;i<n;i++){
        if( readings[i] >=45){
             First_critical = i;
             break;
        }
     }
     
        if (First_critical != -1) {
        cout << "First CRITICAL : Index " << First_critical+1 << " -> " << readings[First_critical] << "°C" << endl;
     }else{
        cout << "first critical none " << endl;
     }
    double minTemp = 0;
    double maxTemp = 0;
    double sum = 0;
    int validCount = 0;

    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    for (int i = 0; i < n; i++) {

        if (readings[i] < 0) {
            continue;
        }

        
        if (validCount == 0) {
            minTemp = readings[i];
            maxTemp = readings[i];
        }
        else {
            if (readings[i] < minTemp)
                minTemp = readings[i];

            if (readings[i] > maxTemp)
                maxTemp = readings[i];
        }

        sum += readings[i];
        validCount++;

        if (readings[i] <= 29) {
            normal++;
        }
        else if (readings[i] <= 44) {
            warning++;
        }
        else if (readings[i] <= 59) {
            critical++;
        }
        else {
            shutdown++;
        }
    }

    if (validCount > 0) {
        double average = sum / validCount;

       
        cout << "Min : " << minTemp << "°C" <<" ";
        cout << "Max : " << maxTemp << "°C" << " ";

        
        cout << "Avg : " << average << "°C" << endl;
    }

    cout << "Normal:" << normal << " Warning:" << warning
         << " Critical:" << critical << " Shutdown:" << shutdown << endl;

    return 0;
}

