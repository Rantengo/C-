//

#include <iostream>
using namespace std;
void Function1();
int Function2();
float Function3();

int main()
{
	int Value1;
	cout << "calling Function1\n";
	Function1();
	cout << "calling Function2\n";
	Value1 = Function2();
	cout << "result of Function2: " << Value1 << endl;
	float Value2;
	cout << "calling Function3\n";
	Value2 = Function3();
	cout << "result of Function3: " << Value2 << endl;

	return 0;
}

void Function1()
{
	cout << "executing Function1\n";
	cout << "returning from Function1\n";
}

int Function2()
{
	cout << "executing Function2\n";
	int returnValue = 5;
	cout << "returning from Function2\n";
	return returnValue;
}

float Function3 ()
{
	cout << "executing Function3\n";
	float returnValue = 5.05;
	cout << "returning from Function3\n";
	return returnValue;
}
