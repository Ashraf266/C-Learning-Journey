#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.hpp"

using namespace std;



Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}


void Time::setTime(int h, int m, int s)
{
	if( (h >=0 && h<=24) && ( m >=0 && m <= 60) && ( s >=0 && s <=60) )
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
	{
		throw invalid_argument("hour, minute and/or second was out of range");
	}
}

void Time::printUniversal()
{
	cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::printStandard()
{
	cout << setw(2) << ( (hour == 0 || hour == 12)? 12 : hour%12 ) << ":" << setfill('0')
			<< setw(2) << minute << ":" << setw(2) << second << ((hour>12)? "PM" : "AM") << endl;
}
