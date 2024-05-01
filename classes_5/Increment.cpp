#include "Increment.hpp"
#include <iostream>

using std::cout;
using std::endl;





Increment::Increment(int c, int i)
	:count(c),
	 increment(i) // Required Initializer for constant members
{

}



void Increment::print() const
{
	cout << "count = " << count << " , increment = " << increment << endl;
}
