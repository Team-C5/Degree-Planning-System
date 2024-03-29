//
//  messaging.cpp
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "userMenu.h"
#include "messaging.h"
#include "courses.h"
#include "courseOfferings.h"



using namespace std;

// Menu to choose type of report
int userMenu(){
    
    int choice;
    
    // do while loop for user to exit program
    do
    {
        // Menu of all reports that can be performed by user
        cout <<"=======================================================" << endl;
        cout << "                       MAIN MENU                      " << endl;
        cout << "=======================================================\n" << endl;
    
        
        // Menu choices
        cout << "\t0 - Quit" << endl;
        cout << "\t1 - Student Transcript" << endl;
        cout << "\t2 - Course Offerings" << endl;
        cout << "\t3 - Degree Plan" << endl;
        cout << "\t4 - Semester Schedule" << endl;
        cout << "\t5 - Help\n" << endl;
    
        cout << "--> Enter your choice: " << endl;
        cin >> choice;
    
        switch (choice)
        {
            case 0:
            {
                cout << "You chose to exit the program." << endl;
                break;
            }
            case 1:
            {
                break;
            }
            case 2:
            {
                offerings();
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                break;
            }
            case 5:
            {
                help();
                break;
            }
            default:
            {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    } while (choice != 0);
    
    return 0;
    
}

