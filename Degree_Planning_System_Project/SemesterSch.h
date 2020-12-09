#ifndef MAIN_H
#define MAIN_H
#include <string>
using namespace std;


class SemesterSchedule
{
    public:
        void setMajor(int);
        void setSchedule(string);

    private:
        string majorSchedule;
};

#endif // MAIN_H


