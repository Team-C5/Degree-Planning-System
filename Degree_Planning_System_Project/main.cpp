//
//  main.cpp
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "messaging.h"
#include "userMenu.h"


using namespace std;

int main(){
    
    // Function to welcome user
    welcoming();
    
    // User will choose what type of report or evaluation he wants to perform
    userMenu();
    
    
}
