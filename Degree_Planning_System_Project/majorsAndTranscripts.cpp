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


void majorsAndTranscripts::outputTranscript(string m_transcript){
   cout << "=======================================================" << endl;
    cout << "                       TRANSCRIPTS" << endl;
    cout << "=======================================================" << endl;

    cout    << "Andrew	Miller	    Accounting 		    MATH 1324 Finite Math, , ACCT 2301 Principles of Accounting I " << endl 
    << endl << "John	Doe		    Chemistry			WRIT 1301 English Composition I, MATH 1314 College Algebra, CHEM 1311 General Chemistry" << endl 
    << endl << "John 	Smith	    Computer Science 	MATH 2413 Calculus I, WRIT 1301 English Composition I" << endl
    << endl << "Jane	Deer	    Marketing	 		POLS 2306 Texas Government, MATH 2413 Calculus I" << endl
    << endl << "William	Clinton	    Psychology	 	    WRIT 1301 English Composition I, WRIT 1302 English Composition II" << endl
    << endl << "George	Jones	    Accounting 		    HIST 1302 US History II, POLS 2306 Texas Government" << endl
    << endl << "Sarah	White	    Chemistry 		    CHEM 1311 General Chemistry, CHEM 3310 Advanced Chemical Calculations" << endl
    << endl << " Bill	Able	    Computer Science	WRIT 1301 English Composition I, CSCI 2331 Computer Organization and Assembly Language" << endl
    << endl << "Larry	Brown	    Marketing			MATH 2413 Calculus I, ECON 3311 Money and Banking" << endl
    << endl << "Amanda	Ernst	    Psychology 		    WRIT 1301 English Composition I, WRIT 1302 Composition II" << endl
    << endl << "Richard	Farmer	    Accounting		    HIST 1301 US History I, ACCT 2301 Principles of Accounting I" << endl
    << endl << "Sam		Green	    Chemistry			MATH 1314 College Algebra, CHEM 1311 General Chemistry" << endl
    << endl << "Paula	Hamilton 	Computer Science	MATH 2413 Calculus I, CSCI Computer Organization and Assembly Language" << endl
    << endl << "Jesus	Javiar	    Marketing 		    MATH 2413 Calculus I, FINC 3331 Business Finance" << endl
    << endl << "Christy	King	 	Psychology		    PSYC 4371 Experimental Methods and Statistics, SOCI 4312 Social Structures: Class, Power, and Status" << endl
    << endl << "Bob		Bush	 	Accounting		    MATH 1324 Finite Math, POLS 23005 Federal Government" << endl
    << endl << "Jerry	Landers	    Chemistry 		    CHEM 1311 General Chemistry, CHEM 4335 Inorganic Chemistry" << endl
    << endl << "Sally	Moore	    Computer Science 	CSCI Computer Organization and Assembly Language, CSCI 3352 Advanced Data Structures and Algorithms" << endl
    << endl << "Nancy	Nadler	    Marketing 		    POLS 2306 Texas Government, POLS 2305 Federal Government" << endl 
    << endl << "Tina	Templar	    Psychology 		    WRIT 1301 English Composition I, SOCI 4312 Social Structures: Class, Power, and Status" << endl;

string majorsAndTranscripts::getMajor() {
    return m_major
}
