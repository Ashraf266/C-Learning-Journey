#ifndef CREATEANDDESTROY_H_
#define CREATEANDDESTROY_H_

#include <string>


class CreateAndDestroy
{
public:
	CreateAndDestroy(int, std::string);
	~CreateAndDestroy();

private:
	int objectID;
	std::string message;
};



#endif /* CREATEANDDESTROY_H_ */
