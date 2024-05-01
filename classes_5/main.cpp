#include <iostream>
#include "Time.hpp"
#include "Increment.hpp"

using namespace std;








int main(void)
{
	/* Dealing with const objects */
	const Time noon(12,0,0);
	noon.printStandard();

	Time time(1,0,0);
	time.printStandard();

	Increment value(10, 5);

	cout << "Before Incrementing: "; value.print();

	value.addIncrement();

	cout << "After Incrementing: "; value.print();



	return 0;
}
