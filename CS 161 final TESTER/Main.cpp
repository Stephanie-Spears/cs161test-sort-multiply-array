#include <iostream>
#include <cmath>

#define Array_Size 10

using namespace std;


void SetArray()
{
int i = 0;

	int Array[Array_Size] = {};

	//initialize the array
	for (int i = 0; i < Array_Size; i++)
	{
		Array[i] = i + 1;
		cout << Array[i] << endl;
	}
	//do the multiplication
	for (int a = 0; a < Array_Size; a++)
	{
		Array[a] = Array[a] * 3;

		cout << Array[a] << endl;
	}

	
}

int main()
{
	
	SetArray();

	return 0;

}


