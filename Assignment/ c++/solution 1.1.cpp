
#include <iostream>
using namespace std;
 

int main() {
	double C;
	double reading =C;
	cout << " enter the temperature :" << endl;
	cin >> C;
	double F =(C*9/5)+32;
	cout << "Temperature : " << C << "°C" << "  /  " << F << endl;

    int status_code;
	if (C<0){
		status_code = -1;
	}else if(C>0&&C<30){
		status_code = 0;
	}else if(C>29&&C<45){
		status_code = 1;
	}else if(C>44&&C<60){
		status_code = 2;
	}else if(C>=60) {
        status_code = 3;
	}

	switch(status_code){
		case -1:
		cout << "Status Lable : " << "SENSOR_ERROR" << endl;
		cout<< "Action : " << "Sensor fault — check wiring" << endl;
		break;

		case 0:
		cout << "Status Lable : " << "NORMAL" << endl;
		cout<< "Action : " << "No action required" << endl;
		break;

		case 1:
		cout << "Status Lable : " << "WARNING" << endl;
		cout<< "Action : " << "Alert sent to supervisor" << endl;
		break;

		case 2:
		cout << "Status Lable : " << "CRITICAL" << endl;
		cout<< "Action : " << "Cooling system triggered" << endl;
		break;

		case 3:
		cout << "Status Lable : " << "SHUTDOWN" << endl;
		cout<< "Action : " << "Emergency shutdown initiated" << endl;
		break;
	}
	  cout << "Reading : " << (C > 25.0 ? "Above average" : "Below average") << endl;
	
	

	return 0;
}