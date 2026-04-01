#include"Student_info.h"

bool compare(const Student_info& a, const Student_info& b) {
	return a.name < b.name;
}
istream& read(istream& is, Student_info& s);
is >> s.name >> s.midterm >> s.final;

read_hw(is, s.homework);
return is;
istream& read_hw(istream& in, vector<double>&);
