#include <iostream>
#include "Time.hpp"



int main(void)
{

	Time time1;
	time1.printStandard();
	time1.printUniversal();

	time1.setTime(15, 12, 4);
	time1.printStandard();
	time1.printUniversal();

	//Time time2;
	Time time2(22);

	time2.printStandard();
	time2.printUniversal();


	return 0;
}
