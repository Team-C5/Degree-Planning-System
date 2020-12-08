//
//  courses.h
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/* The class Course will instantiate course
 objects that will produce a list of courses
 offered by the college
 */

class Course
{
public:
    void setRubric(string);
    void setNumber(int);
    void setName(string);
    
    string getRubric();
    int getNumber();
    string getName();
    
private:
    string m_rubric;
    int m_number;
    string m_name;
};
