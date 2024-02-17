//pass by referance
//DKI-3A
//

#include <iostream>
using namespace std;

int Total (int value1);

int main ()
{
	int value2=40;
	int value3=20;
	int GAINS;

	GAINS= value2 + value3;
	cout<<"Jumlah = "<<GAINS<<endl;

	GAINS=Total (GAINS);
	cout<<"Jawapan = "<<GAINS<<endl;

	return 0;
}

int Total (int value1)
{
	value1 = value1*3;
	cout<<"Hasil darab = "<<value1<<endl;

	return value1;
}



