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
    void courses(int);
    void majors(int);
    
    string getMajor();
    
private:
    string major;
    int numberOfCourses;
    int numberOfMajors;
};

#endif
