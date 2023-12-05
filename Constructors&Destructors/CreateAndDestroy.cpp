#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;



CreateAndDestroy::CreateAndDestroy(int ID, string msg)
{
	objectID = ID;
	message = msg;

	cout << "Object: " << objectID << " constructor runs " << message << endl;
}


CreateAndDestroy::~CreateAndDestroy()
{
 cout << "Object " << objectID << " destructor runs " << message << endl;
}



