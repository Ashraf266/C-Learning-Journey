#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

using namespace std;

/* Not a correct way to seperate a class */
class GradeBook_v3
{
private:
	string courseName;

public:
	GradeBook_v3(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
};


#endif /* GRADEBOOK_H */
