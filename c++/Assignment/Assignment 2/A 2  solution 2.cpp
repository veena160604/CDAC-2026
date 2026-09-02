//============================================================================
// Name        : A.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    int age;
    string ward;

    const string bloodGroup;

public:
    // Constructor 1 Default

    Patient()
        : patientId(0), name("Unknown"), age(0), ward("General"), bloodGroup("O+")
    {
        cout << "[Constructor] Default patient registered.\n";
    }

    // Constructor 2 Emergency admission (id + name only)
    Patient(int id, const string& n)
        : patientId(id), name(n), age(0), ward("Emergency"), bloodGroup("Unknown")
    {
        cout << "[Constructor] Emergency: " << name << endl;
    }

    // Constructor 3: Full admission details
    Patient(int id, const string& n, int a, const string& w, const string& bg)
        : patientId(id), name(n), age(a), ward(w), bloodGroup(bg)
    {
        cout << "[Constructor] Full admission: " << name << endl;
    }

    //  Destructor

    ~Patient() {
        cout << "[Destructor] Patient " << name << " discharged.\n";
    }

    void displayRecord() const {
        cout << "Patient Record:\n";
        cout << "  ID        : " << patientId << endl;
        cout << "  Name      : " << name << endl;
        cout << "  Age       : " << age << endl;
        cout << "  Ward      : " << ward << endl;
        cout << "  Blood Grp : " << bloodGroup << endl;
    }

    // Ward can change during a patient's stay, so it's a normal
    // (non-const) member and can be modified after construction.
    void transferWard(const string& newWard) {
        cout << "Ward Transfer: " << name << " -> " << newWard << endl;
        ward = newWard;
    }

    string getName() const { return name; }
};

int main() {
    cout << "===== Creating 3 stack patients (observe constructor messages) =====\n";


    Patient p1(1001, "Meera Joshi", 34, "Cardiology", "B+");
    Patient p2(1002, "Raj Patel");
    Patient p3;

    cout << "\n===== Creating dynamic array of 4 patients on the heap =====\n";

    Patient* wardArray = new Patient[4];

    cout << "\n===== Displaying all 4 heap patients =====\n";
    for (int i = 0; i < 4; i++) {
        wardArray[i].displayRecord();
        cout << "-------------------------\n";
    }

    cout << "\n===== Transferring one patient's ward =====\n";
    p2.transferWard("ICU");

    cout << "\n===== Deleting the heap array (observe destructor x4) =====\n";

    delete[] wardArray;

    cout << "\n===== End of main() - stack objects go out of scope now =====\n";

    return 0;
}

