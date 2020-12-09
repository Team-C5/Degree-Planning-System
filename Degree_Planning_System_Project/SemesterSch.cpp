#include <iostream>
#include "main.h"

using namespace std;


int main(){
    int studentMajor;

    cout << "Welcome to the semester schedule!" << endl << "Select your major." << endl;
    cout << "1 = Accounting" << endl << "2 = Chemistry" << endl << "3 = Computer Science" << endl << "4 = Marketing" << endl << "5 = Psychology" << endl;

    cout << "Major?:";
    cin >> studentMajor;

    if (studentMajor == 1) {
        cout << "Monday               Tuesday            Wednesday           Thursday          Friday          Saturday          Sunday" << endl;
        cout << "HIST 1302            MATH 1324          HIST 1302           MATH 1324" << endl;
        cout << "(08:35AM-10:00AM)   (12:00PM-1:25PM)  (08:35AM-10:00AM)  (12:00PM-1:25PM)" << endl;
        cout << "POLS 2306            ACCT 2301          POLS 2306           ACCT 2301" << endl;
        cout << "(10:10AM-11:35AM)   (01:35PM-03:00PM) (10:10AM-11:35AM)  (01:35PM-03:00PM)";
    }
    else if (studentMajor == 2) {
        cout << "Monday               Tuesday            Wednesday           Thursday           Friday          Saturday          Sunday" << endl;
        cout << "MATH 1314            CHEM 1311          MATH 1314           CHEM 1311          CHEM 4335 " << endl;
        cout << "(08:35AM-10:00AM)   (12:00PM-1:25PM)  (08:35AM-10:00AM)  (12:00PM-1:25PM)    (8:00AM-11:00AM)" << endl;
        cout << "CHEM 3310                               CHEM 3310          " << endl;
        cout << "(10:10AM-11:35AM)                     (10:10AM-11:35AM)  "; }
    else if (studentMajor == 3) {
        cout << "Monday               Tuesday            Wednesday           Thursday           Friday             Saturday        Sunday" << endl;
        cout << "MATH 2413                                MATH 2413                            CSCI 2331          CSCI 3352" << endl;
        cout << "(10:00AM-12:00PM)                      (10:00AM-12:00PM)                   (8:00AM-11:00AM)    (11:00AM-01:00PM)" << endl;
        cout << "                     WRIT 1301                     " << endl;
        cout << "                     (06:00PM-09:00PM)";
    }
    else if (studentMajor == 4){
        cout << "Monday               Tuesday            Wednesday           Thursday           Friday          Saturday          Sunday" << endl;
        cout << "ECON 3311            ECON 3331          ECON 3311           ECON 3331          POLS 2306 " << endl;
        cout << "(08:00AM-9:25AM)    (08:00AM-10:25AM)  (08:00AM-09:25AM)  (08:00AM-10:25AM)   (11:00AM-02:00PM)" << endl;
        cout << "MATH 2413                               MATH 2413          " << endl;
        cout << "(10:00AM-12:00PM)                     (10:00AM-12:00PM)  ";
    }
    else if (studentMajor == 5){
        cout << "Monday               Tuesday            Wednesday           Thursday           Friday            Saturday          Sunday" << endl;
        cout << "                     WRIT 1302                              WRIT 1302          SOCI 4312         PSYC 4371" << endl;
        cout << "                    (01:00PM-02:25PM)                      (01:00PM-02:25PM)  (01:00PM-04:00PM)  (06:00PM-09:00PM)" << endl;
        cout << "                     POLS 2305                              POLS 2305" << endl;
        cout << "                    (03:00PM-04:25PM)                      (01:00PM-02:25PM)";
    }



return 0;
}

