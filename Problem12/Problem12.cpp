#include <iostream>

using namespace std;

int main()
{
	//Write a program to print even numbers (0 : 100)
	
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << "  ";
		}
	}

	return 0;
}