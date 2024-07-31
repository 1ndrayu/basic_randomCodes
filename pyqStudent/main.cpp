#include <iostream>
using namespace std;

class student {
public:
    int rn;
    string name;
    int marks[4];

    void getInfo();
    void disp();
};

void student::getInfo() {
    cout << "Enter roll no.: ";
    cin >> rn;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks of\n";

    cout << "subject 1: ";
    cin >> marks[0];
    cout << "subject 2: ";
    cin >> marks[1];
    cout << "subject 3: ";
    cin >> marks[2];
    cout << "subject 4: ";
    cin >> marks[3];
}

void student::disp() {
    cout << "\nRoll no: " << rn;
    cout << "\nName: " << name;
    cout << "\nMarks\n";

    cout << "\nSubject 1: " << marks[0];
    cout << "\nSubject 2: " << marks[1];
    cout << "\nSubject 3: " << marks[2];
    cout << "\nSubject 4: " << marks[3];
}

int main() {
    cout << "Enter no. of students: ";
    int n;
    cin >> n;

    student s[n];

    for (int i = 0; i < n; i++) {
        s[i].getInfo();
    }

    cout << "List of passed students\n";
    for (int i = 0; i < n; i++) {
        if (s[i].marks[0] > 40 && s[i].marks[1] > 40 && s[i].marks[2] > 40 && s[i].marks[3] > 40)
            s[i].disp();
    }

    cout << "Highest Marks\n";
    int tmarks[n], hmarks = 0;
    for (int i = 0; i < n; i++) {
        tmarks[i] = s[i].marks[0] + s[i].marks[1] + s[i].marks[2] + s[i].marks[3];
        if (tmarks[i] > hmarks)
            hmarks = tmarks[i];
    }

    for (int i = 0; i < n; i++) {
        if (tmarks[i] == hmarks)
            s[i].disp();
    }

    return 0;
}
