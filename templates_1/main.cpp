#include <iostream>
template < typename T, class S > // or < class T >
T maximum(T var1, T var2, S var3);

template < class T >
void print(T x)
{
	std::cout<< x << std::endl;
}
int main(void)
{

	int x=0, y=1, z=2;
	std::cout<< maximum(x, y, z) << std::endl;
	std::cout<< maximum(2.2, 5.6, 3.3) << std::endl;
	std::cout<< maximum('A', 'B', 'C') << std::endl;

	print(x);
	print("hello world");
	print(2.2);
	print('C');
	print(&x);


	return 0;
}

template < typename T, class S >  // or < class T >
T maximum(T var1, T var2, S var3)
{
	T max = var1;
	if(var2 > max)
		max = var2;
	if(var3 > max)
		max = var3;

	return max;
}
