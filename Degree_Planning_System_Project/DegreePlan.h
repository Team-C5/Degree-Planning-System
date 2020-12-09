#ifndef DEGREE_PLAN
#define DEGREE_PLAN

#include <string>
#include <vector>
using namespace std;

class DegreePlan {
public:
	void setReqCourses(string planName);
	void outputReqCourses();
private:
	string planName;
	vector<string> coreReqs;
	vector<string> majorReqs;
	char reqGrade;
	int totHours;
};

#endif