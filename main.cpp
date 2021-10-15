#include <iostream>

using namespace std;

//declare functions
void passRef(float input, float& output);

//declare variables here
float myNum = 45.0;

int main()
{
	void passRef(float input, float& output);			//invoke the function

	cout << "myNum = :"<<myNum<< endl;
	passRef(myNum, myNum);
	cout <<"The input divided by 6 is: " << myNum;
	cout << endl << endl;
	return 0;
}

//this function divides the input by 6 then returns the result
void passRef(float input, float& output)
{
	output = input / 6;
}