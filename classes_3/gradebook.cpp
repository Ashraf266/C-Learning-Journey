#include "gradebook.h"
#include <iostream>


GradeBook_v3::GradeBook_v3(string name)
{
	setCourseName(name);
}

void GradeBook_v3::setCourseName(string name)
{
	if ( name.length() <= 25 ) // if name has 25 or fewer characters
		courseName = name; // store the course name in the object

	if ( name.length() > 25 ) // if name has more than 25 characters
	{
		// set courseName to first 25 characters of parameter name
		courseName = name.substr( 0, 25 ); // start at 0, length of 25

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
				<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook_v3::getCourseName()
{
	return courseName;
}

void GradeBook_v3::displayMessage()
{
	cout << "Welcome to the Grade Book for " << getCourseName() << "!" << endl;
}
