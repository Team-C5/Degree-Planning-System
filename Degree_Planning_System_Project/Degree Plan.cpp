#include <iostream>
#include <string>
#include <fstream>
#include "DegreePlan.h"
using namespace std;

void DegreePlan::setReqCourses(string planName) {
	if (planName == "Computer Science") {
		requiredCourses = { "WRIT 1301 Composition I", "WRIT 1302 Composition II", "MATH 2413 Calculus I", "PHYS 2325 University Physics", "PHYS 2326 University Physics",
						   "HIST 1301 U.S. History I", "HIST 1302 U.S. History II", "POLS 2305 Federal Government", "POLS 2306 Texas Government", "COMM 1315 Public Speaking",
						   "PSYC 1100 Learning Frameworks", "PHYS 2125 Lab for University Physics I", "PHYS 2126 Lab for University Physics II", "CHEM 1311/1111 General Chemistry I and Lab",
						   "MATH 2305 Discrete Math", "MATH 2318 Linear Algebra", "MATH 2414 Calculus II", "MATH 2320 Differential Equations", "STAT 3334 Probability and Statistics for Scientists & Engineers",
						   "CSCI 1470 Computer Science I", "CSCI 1471 Computer Science II", "CSCI 2331 Computer Organization and Assembly Language", "CSCI 2315 Data Structures",
						   "CSCI 3352 Advanced Data Structures and Algorithms", "CSCI 4333 Design of Database Systems", "CSCI 3321 Numerical Methods", "CSCI 4354 Operating Systems",
						   "CENG 2312/2112 Digital Circuits and Lab", "CENG 3331/3131 Introduction to Telecommunications & Networks and Lab", "CENG 3351/3151 Computer Architecture and Lab",
						   "SWEN 4342 Software Engineering", "WRIT 3315 Advanced Technical Writing", "CSCI 4388 Senior Projects in Computer Science"};
	}
	if (planName == "Chemistry") {
		requiredCourses = { "WRIT 1301 Composition I", "WRIT 1302 Composition II", "MATH 2413 Calculus I", "CHEM 1311 General Chemistry I", "CHEM 1312 General Chemistry II", "HIST 1301 U.S. History I",
						   "HIST 1302 U.S. History II", "POLS 2305 Federal Government", "POLS 2306 Texas Government", "COMM 1315 Public Speaking", "PSYC 1100 Learning Frameworks", "PSYC 1100 Learning Frameworks",
						   "CHEM 1111 Lab General Chemistry I", "CHEM 1112 Lab for General Chemistry II", "WRIT 3315 Advanced Technical Writing", "PHYS 2325/2125 University Physics I & Lab",
						   "PHYS 2326/2126 University Physics II & Lab", "MATH 2414 Calculus II", "CHEM 2323/2123 Organic Chemistry I & Lab", "CHEM 2325/2125 Organic Chemistry II & Lab", "CHEM 4368 Advanced Organic Chemistry",
						   "CHEM 4371 Advanced Spectroscopic Analysis", "CHEM 3310 Advanced Chemical Calculations", "CHEM 4335 Inorganic Chemistry", "CHEM 4235 Advanced Lab for Inorganic Chemistry",
						   "CHEM 4321 Physical Chemistry I", "CHEM 4322 Physical Chemistry II", "CHEM 4222 Lab for Physical Chemistry", "CHEM 4373 Quantitative Chemical Analysis", "CHEM 4274 Lab for Quantitative Chemical Analysis",
						   "CHEM 4367 Instrumental Analysis", "CHEM 4268 Lab for Instrumental Analysis", "CHEM 4341 Biochemistry I", "CHEM 4365 Introduction to Polymer Chemistry", "CHEM 4372 Undergraduate Research I and Seminar",
						   "CHEM 4379 Undergraduate Research II", "CHEM 4363 Forensic Chemistry", "CHEM 4342 Biochemistry II", "CHEM 4359 Drug Discovery and Design", "CHEM 3333 or ENSC 3332 Environmental Chemistry",
						   "CHEM 4355 Environmental Sampling and Monitoring", "CHEM 4251 Lab for Environmental Analysis", "CHEM 4189 Independent Study in Chemistry", "CHEM 4389 Independent Study in Chemistry",
						   "CHEM 4376 Introduction to Petroleum Chemistry", "CHEM 4391 Chemistry: Topics", "CHEM 4312 Principles of Astrobiochemistry", "CHEM 4311 Chemical Origins", "CHEM 4328 Introduction to Medicinal Chemistry"};
	}
	if (planName == "Accounting") {
		requiredCourses = { "WRIT 1301 Composition I", "WRIT 1302 Composition II", "MATH 1324 Finite Math", "HIST 1301 U.S. History I", "HIST 1302 U.S. History II", "POLS 2305 Federal Government", "POLS 2306 Texas Government",
						   "COMM 1315 Public Speaking", "PSYC 1100 Learning Frameworks", "ACCT 2301 Principles of Accounting I", "ACCT 2302 Principles of Accounting II", "BAPA 1301 Business Principles", "ECON 2301 Principles of Macroeconomics",
						   "ECON 2302 Principles of Microeconomics", "ISAM 1305 Business Computer Applications", "DSCI 3321 Statistics I", "DSCI 3331 Quantitative Methods for Management", "ECON 3311 Money and Banking"
						   "FINC 3331 Business Finance", "ISAM 3303 Information Systems for Management", "LEGL 3301 Business Law", "MGMT 3301 Management Theory and Practice", "MGMT 4312 Strategic Management", "MKTG 3301 Principles of Marketing",
						   "WRIT 3312 Written Communication in Business", "ACCT 3333 Cost Accounting", "ACCT 3341 Intermediate Accounting I", "ACCT 3342 Intermediate Accounting II", "ACCT 4331 Federal Taxation of Individuals"
						   "ACCT 4332 Financial Information Systems", "ACCT 4341 Auditing I", "ACCT 4352 Advanced Financial Accounting"};
	}
	if (planName == "Marketing") {
		requiredCourses = { "WRIT 1301 Composition I", "WRIT 1302 Composition II", "MATH 1324 Finite Math", "HIST 1301 U.S. History I", "HIST 1302 U.S. History II", "POLS 2305 Federal Government", "POLS 2306 Texas Government"
						   "COMM 1315 Public Speaking", "PSYC 1100 Learning Frameworks", "ACCT 2301 Principles of Accounting I", "ACCT 2302 Principles of Accounting II", "BAPA 1301 Business Foundations", "ECON 2301 Principles of Macroeconomics"
						   "ECON 2302 Principles of Microeconomics", "ISAM 1305 Business Computer Applications", "MATH 1324 Finite Math", "DSCI 3321 Statistics I", "DSCI 3331 Quantitative Methods for Management", "ECON 3311 Money and Banking"
						   "FINC 3331 Business Finance", "ISAM 3303 Information Systems for Management", "LEGL 3301 Business Law", "MGMT 3301 Management Theory and Practice", "MGMT 4312 Strategic Management", "MKTG 3301 Principles of Marketing"
						   "WRIT 3312 Written Communication in Business", "MKTG 3313 Marketing Channels & Distribution", "MKTG 3343 Consumer Behavior", "MKTG 3351 Marketing Research"};
	}
	if (planName == "Psychology") {
		requiredCourses = { "WRIT 1301 English Composition I", "WRIT 1302 English Composition II", "MATH 1314 College Algebra", "HIST 1301 U.S. History I", "HIST 1302 U.S. History II ", "POLS 2305 Federal Government"
						   "POLS 2306 Texas Government", "COMM 1315 Public Speaking", "PSYC 1100 Learning Frameworks", "WRIT 3306 Writing for the Social Sciences", "HUMN 3374   Critical Inquiry", "ANTH 3311 Contemporary Cultural Anthropology"
						   "SOCI 4312 Social Structure: Class, Power and Status", "PSYC 2301 Introduction to Psychology", "PSYC 3311 Careers and Writing ", "PSYC 3315 Psychological Thinking", "PSYC 4370 Nonexperimental Methods and Statistics"
						   "PSYC 4371 Experimental Methods and Statistics", "PSYC 3331 Theories of Personality", "PSYC 4311 Social Psychology", "PSCY 4314 Child Psychology", " PSYC 4315 Adolescent Psychology"
						   "PSYC 4316 Brain and Behavior"
		};
	}
}

void DegreePlan::outputReqCourses() {
	for (auto i = requiredCourses.begin(); i < requiredCourses.end(); i++) {
		cout << *i << endl;
	}
}
