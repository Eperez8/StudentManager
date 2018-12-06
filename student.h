#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std;

class student
{

    private:
    string first;
    string last;
    vector<double> gradeList;

    public:
    void setName(string,string);
    string fullName();
    double getScore();
    double addGrade(double);
    student();
};


#endif

