//
//  courses.cpp
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "courses.h"

using namespace std;

//Setter methods
void Course::setRubric(string rubric){
    m_rubric = rubric;
}
void Course::setNumber(int number){
    m_number = number;
}
void Course::setName(string name){
    m_name = name;
}


//Getter methods
string Course::getRubric(){
    return m_rubric;
}
int Course::getNumber(){
    return m_number;
}

string Course::getName(){
    return m_name;
}

