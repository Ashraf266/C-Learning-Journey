#include <iostream>

int cube(int =1, int =1, int =1);

int main() {
	std::cout << cube() << std::endl;
	return 0;
}


int cube(int l, int w, int h)
{
	return l*w*h;
}
