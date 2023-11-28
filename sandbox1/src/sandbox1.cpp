#include <iostream>
#include <vector>

int cube(int =1, int =1, int =1);

class test
{
public:
	int x;

public:
	int y;

private:
	int z;

public:
	test()
	{
		x=1;
		y=1;
		z=1;
	}
};

int main() {

	std::vector<int> vect2 = {1,2,3};
	std::vector<int> vect = vect2;
	std::cout << cube() << std::endl;

	test test1;
	std::cout<< test1.x << std::endl;

	//test test3 = test1;

	return 0;
}


int cube(int l, int w, int h)
{
	return l*w*h;
}
