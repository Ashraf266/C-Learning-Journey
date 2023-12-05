#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

void create(void);

CreateAndDestroy gObject(0, "global before main");


int main()
{

	cout << "main function begins ...." << endl;


	CreateAndDestroy object1(1, "local auto in main");
	static CreateAndDestroy object2(2, "local static in main");

	create();

	CreateAndDestroy object3(6, "local auto in main");


	cout << "main function ends ..." << endl;
	return 0;
}


void create()
{
	cout << "create function begins ... " << endl;
	CreateAndDestroy object1(3, "local auto in create");
	static CreateAndDestroy object2(4, "local static in create");
	CreateAndDestroy object3(5, "local auto in create");
	cout << "create function ends ..." << endl;
}

