#include <iostream>
using namespace std;
void hottest_room(double arrtemp[3][3]){
    double max = arrtemp[0][0];
    int floor=1;
    int room=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arrtemp[i][j]){
                max= arrtemp[i][j];
                floor=i+1;
                room =j+1;
            }
        }
    }
     cout<< "\n"<< "Hottest Room :" << "Floor" << floor << "," << "Room" << room << "->" << max << "°C" << endl;
}

void hottest_floor(double arrtemp[3][3]){
    double max=(arrtemp[0][0]+arrtemp[0][1]+arrtemp[0][2])/3;
    int floor =1;
     for(int i=0;i<3;i++){
        double sum=0;
        for(int j=0;j<3;j++){
            sum+=arrtemp[i][j]; 
        } double avg =sum/3.0;
        if (avg>max){
            max=avg;
            floor=i+1;
        }
    } 
         cout<< "Hottest Floor : Floor   "  << floor << "  (avg "<< max << "°C)" << endl;

}

void warnings(double arrtemp[3][3]){
      int count =0;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arrtemp[i][j]>=30){
                count++;
            }
        }
      }
      cout<< "Rooms at WARNING or above : " << count << endl;
}

int main(){
    double arrtemp[3][3];
    cout << "enter the temperature for all rooms : " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cin>>arrtemp[i][j];
        }
    }
    cout << " \n\t  Room 1   Room 2   Room 3   " << endl;
     for(int i=0;i<3;i++){
         cout << " \nFloor " << i + 1 << "\t";
        for(int j=0;j<3;j++){
           cout << "  " << arrtemp[i][j] <<"\t " ;
        }
    } 
    hottest_room(arrtemp);
    hottest_floor(arrtemp);
    warnings(arrtemp);
        

  return 0;
}


          