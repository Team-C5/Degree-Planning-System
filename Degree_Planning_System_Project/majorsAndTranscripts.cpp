//
//  majorsAndTranscripts.cpp
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "majorsAndTranscripts.h"

using namespace std;

void majorsAndTranscripts::chosenMajor(string major) {
    m_major = major;
}

void majorsAndTranscripts::courses(string courses) {
    m_courses = courses;
}

void majorsAndTranscripts::majors(string majors){
    m_majors = majors;
}
