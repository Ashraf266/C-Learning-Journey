#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time(int = 0, int = 0, int = 0);
	void setTime(int, int, int);
	/* Set functions */
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	/* Get functions */
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	void printUniversal();
	void printStandard() const;

private:
	int hour;
	int minute;
	int second;
};


#endif
