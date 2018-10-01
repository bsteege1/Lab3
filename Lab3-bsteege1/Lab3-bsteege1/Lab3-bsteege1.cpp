//Brandon Steege
//Lab 3
//10/01/18

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
/*	short n;
	short sum(0);
	
	cout << "Please enter a value for n <= 255: ";
	cin >> n;

	for (short i(1); i <= n; i++)
	{
		short x = i;
		sum = sum + x;
		cout << "Sum: " << sum << endl << "n: " << n << endl;
	}

	long n1;
	long sum1(0);

	cout << "Please enter a value for n <= 65535: ";
	cin >> n1;

	for (long i(1); i <= n1; i++)
	{
		long x1 = i;
		sum1 = sum1 + x1;
		cout << "Sum: " << sum1 << endl << "i: " << i << endl;
	}
	

	long n2;
	long product(1);

	cout << "Please enter a value for n <= 65535: ";
	cin >> n2;

	for (long i(1); i <= n2; i++)
	{
		if (product > 0)
		{
			long x1 = i;
			product = product * x1;
			cout << "Product: " << product << endl << "i: " << i << endl;
		}
		else
		{
			n2 = (i - 1);

			cout << "Overflow begins at: " << n2 << endl;
		}
	}

	*/

	float n3;
	float product(1);

	cout << "Please enter a value for n <= 65535: ";
	cin >> n3;

	for (float i(1); i <= n3; i++)
	{
		if (product > 0)
		{
			float x1 = i;
			product = product * x1;
			cout << "Product: " << product << endl << "i: " << i << endl;
		}
		else
		{
			cout << "Overflow begins at: " << n3 << endl;
		}
	}
	
	system("pause");
	return 0;
}