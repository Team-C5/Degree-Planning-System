//
//  majorsAndTranscripts.h
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#ifndef MAJORSANDTRANSCRIPTS_H
#define MAJORSANDTRANSCRIPTS_H
#include <string> 

using namespace std;

class majorsAndTranscripts
{
public:
    void chosenMajor(string);
    void courses(string);
    void majors(string);
    
    string getMajor();
    
private:
    string m_major;
    string m_courses;
    string m_majors;

};

#endif
