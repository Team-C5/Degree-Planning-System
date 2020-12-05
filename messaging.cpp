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

#include "messaging.h"

using namespace std;

//Welcoming and instructing user
void welcoming(){
    
    cout << "=======================================================" << endl;
    cout << "              SAN JAC DEGREE PLANNING SYSTEM           " << endl;
    cout << "=======================================================\n" << endl;
    cout << "--> Choose from below what type of report you wish to\n";
    cout << "    perform, or choose quit to exit the program.\n\n" << endl;

}

//Extra user help
void help(){
    
    cout << "=======================================================" << endl;
    cout << "                        HELP                          " << endl;
    cout << "======================================================\n" << endl;
    
    cout << "--> The information provided is only valid for the" << endl;
    cout << "    current semester.\n" << endl;

}



