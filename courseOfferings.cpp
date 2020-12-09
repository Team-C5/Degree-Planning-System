//
//  courseOfferings.cpp
//  Degree Planning System
//
//  Created by Gleici Pereira, Stephanie Organista, Jack Yu, and Keven Cruz on 12/2/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "courseOfferings.h"
#include "courses.h"

using namespace std;

// This function will instantiate all courses from the class Course
int offerings (){
    
    cout << "=======================================================" << endl;
    cout << "          CLASSES AVAILABLE FOR THIS SEMESTER" << endl;
    cout << "=======================================================" << endl;
    
    Course History;
    History.courseOfferings("HIST", 1302, "U.S. History II");
    
    Course TexasGovernment;
    TexasGovernment.courseOfferings("POLS", 2306, "Texas Government");
    
    Course FiniteMath;
    FiniteMath.courseOfferings("MATH", 1324, "Finite Math");
    
    Course Accounting1;
    Accounting1.courseOfferings("ACCT", 2301, "Principles of Accounting I");
    
    Course CollegeAlgebra;
    CollegeAlgebra.courseOfferings("MATH", 1314, "College Algebra");
    
    Course Chemistry1;
    Chemistry1.courseOfferings("CHEM", 1311, "General Chemistry");
    
    Course AdvChemistry;
    AdvChemistry.courseOfferings("CHEM", 3310, "Advanced Chemical Calculations");
    
    Course InoChemistry;
    InoChemistry.courseOfferings("CHEM", 4335, "Inorganic Chemistry");
    
    Course English1;
    English1.courseOfferings("WRIT", 1301, "English Composition I");
    
    Course Calculus1;
    Calculus1.courseOfferings("MATH", 2413, "Calculus I");
    
    Course CompOrg;
    CompOrg.courseOfferings("CSCI", 2331, "Computer Organization and Assembly Language");
    
    Course AdvDataStruct;
    AdvDataStruct.courseOfferings("CSCI", 3352, "Advanced Data Structures and Algorithms");
    
    Course Physics1;
    Physics1.courseOfferings("PHYS", 2325, "University Physics I");
    
    Course Physics2;
    Physics2.courseOfferings("PHYS", 2326, "University Physics II");
    
    Course Econ;
    Econ.courseOfferings("ECON", 3311, "Money and Banking");
    
    Course Finance;
    Finance.courseOfferings("FINC", 3331, "Business Finance");
    
    Course Composition2;
    Composition2.courseOfferings("WRIT", 1302, "Composition II");
    
    Course FedGovt;
    FedGovt.courseOfferings("POLS", 2305, "Federal Government");
    
    Course SocialStruct;
    SocialStruct.courseOfferings("SOCI", 4312, "Social Structures: Class, Power, and Status");
    
    Course ExpMethods;
    ExpMethods.courseOfferings("PSYC", 4371, "Experimental Methods and Statistics");

    
    return 0;
}
