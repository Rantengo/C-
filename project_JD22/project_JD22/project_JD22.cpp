// (khalil,ilham,aliff)
// (project JD22)
// (11/11/22)

#include <iostream>
#include <iomanip>
using namespace std;

void value(float&);
float Area7(float, float);
float Perimeter(float, float);

int main()
{
	char y;
	float length = 1;
	float area = 2;
	float perimeter = 3;

	do
	{
		value(length);
		perimeter = Perimeter(length, perimeter);
		cout << fixed;
		cout << showpoint;
		cout << setprecision(2);
		cout << "Perimeter= " << perimeter << endl;
		area = Area7(length, area);
		cout << fixed;
		cout << showpoint;
		cout << setprecision(2);
		cout << "Area= " << area << endl;
		cout << "Press (y/Y) to stop the program " << endl;
		cin >> y;
		cout << endl;
	} 
	while ((y!= 'y')||(y!='Y'));
}

//sub program 1
void value(float & length)
{
	cout << endl;
	cout << "Length: " << endl;
	cin >> length;

	if (length < 0)
	{
		cout << "Please enter a positive, (+) value" << endl;
		cin >> length;
	}
	cout << endl;
}

//sub program 2
float Perimeter(float length, float perimeter)
{
	perimeter = length * 4;
	return perimeter;
}

//sub program 3
float Area7(float length, float area)
{
	area = length * length;
	return area;
}




