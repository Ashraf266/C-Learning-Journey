#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.hpp"

using namespace std;



Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second); // validate and set time
}


void Time::setTime(int h, int m, int s)
{
		setHour(h);// set private field hour
		setMinute(m);// set private field minute
		setSecond(s);// set private field second
}

/* Set functions */
void Time::setHour(int h)
{
	if(h >=0 && h<24)
	{
		hour = h;
	}
	else
	{
		throw invalid_argument("hour must be 0-23");
	}

}
void Time::setMinute(int m)
{
	if( m >=0 && m < 60)
	{
		minute = m;
	}
	else
	{
		throw invalid_argument("minute must be 0-59");
	}
}
void Time::setSecond(int s)
{
	if( s >=0 && s <60)
	{
		second = s;
	}
	else
	{
		throw invalid_argument("second must be 0-59");
	}
}

/* Get functions */
int Time::getHour() const
{
	return hour;
}
int Time::getMinute() const
{
	return minute;
}
int Time::getSecond() const
{
	return second;
}

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
	cout << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
	cout << setw(2) << ( (getHour() == 0 || getHour() == 12)? 12 : getHour()%12 ) << ":" << setfill('0')
			<< setw(2) << getMinute() << ":" << setw(2) << getSecond() << ((getHour()>12)? "PM" : "AM") << endl;
}
