#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> vector_1(333);
	vector<int> vector_2(5);
	vector_1[0] = 2;
	vector_2 = {1, 2, 3, 4, 5};
	cout << vector_1.size() << endl;

	if(vector_1 > vector_2) // means first element of the vector
		cout << "hello" << endl;


	vector_1 = vector_2;

	cout << vector_1.size() << endl;

	cout << vector_2[6] << endl;



	return 0;
}
