#include<string>
#include<vector>
#include<iostream>
#include"Student_info.h"

class Student_info {

public:
std::string name() const { return n; }
bool valid() const { return !homework.empty(); }
// as defined in §9.2.1/157, and changed to read into n instead of name
std::istream& read(std::istream&);

double Student_info::grade() const
{
return ::grade(midterm, final, homework);
}

private:
std::string n;
double midterm, final;
std::vector<double> homework;
};

bool compare(const Student_info& x, const Student_info& y)
{
return x.name() < y.name();
};

istream& Student_info::read(istream& in)
{
    in >> n >> midterm >> final;
    read_hw(in, homework);
    return in;
}

istream& read_hw(istream& in, vector<double>& hw)
{
if (in) {
// get rid of previous contents
hw.clear();
// read homework grades
double x;
while (in >> x)
hw.push_back(x);
// clear the stream so that input will work for the next student
in.clear();
}
return in;
}


