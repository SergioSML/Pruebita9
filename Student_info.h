#include<string>
#include<vector>
#include<iostream>

class Student_info {

public:
std::string name() const { return n; }
bool valid() const { return !homework.empty(); }
// as defined in §9.2.1/157, and changed to read into n instead of name
std::istream& read(std::istream&);
double grade() const;
// as defined in §9.2.1/158
private:
std::string n;
double midterm, final;
std::vector<double> homework;
};

bool compare(const Student_info& x, const Student_info& y);
