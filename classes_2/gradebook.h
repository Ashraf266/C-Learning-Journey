#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>

using namespace std;

/* Not a correct way to seperate a class */
class GradeBook_v3
{
private:
	string courseName;

public:
	GradeBook_v3(string name)
	{
		setCourseName(name);
	}

	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
	}
};


#endif /* GRADEBOOK_H */
