//Brandon Steege
//Lab 3
//10/08/18

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	short n;
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
	float product2(1);

	cout << "Please enter a value for n <= 34: ";
	cin >> n2;

	for (long i(1); i <= n2; i++)
	{
		if (product2 > 0)
		{
			long x1 = i;
			product2 = product2 * x1;
			cout << "Product: " << product2 << endl << "i: " << i << endl;
		}
		else
		{
			n2 = (i - 1);

			cout << "Overflow begins at: " << n2 << endl;
		}
	}

	
	
	float n3;
	double product3(1);

	cout << "Please enter a value for n <= 170: ";
	cin >> n3;

	for (float i(1); i <= n3; i++)
	{
		if (product3 > 0)
		{
			float x1 = i;
			product3 = product3 * x1;
			cout << "Product: " << product3 << endl << "i: " << i << endl;
		}
		else
		{
			cout << "Overflow begins at: " << n3 << endl;
		}
	}
	

	float n4;
	float sum4(0);

	cout << "Please enter a value for n <= 9: ";
	cin >> n4;

	for (float i(1); i <= n4; i++)
	{
		float ratio = (1 / n4);
		sum4 = (ratio + sum4);
		cout << "Sum: " << (sum4 - 1) << endl << "i: " << i << endl;
	}
	
	double n5;
	double sum5(0);

	cout << "Please enter a value for n <= 5: ";
	cin >> n5;

	for (double i(1); i <= n5; i++)
	{
		double ratio = (1 / n5);
		sum5 = (ratio + sum5);
		cout << "Sum: " << (sum5 - 1) << endl << "i: " << i << "\n" << endl;
	}
	
	
	//The float does not store the exact value, which makes the for loop believe that i is actually less than 4.4, when if it was more accurate, it shouldn't have. The double is far more accurate 
	// and will actually go to the correct values. 
	for (float i = 3.4; i < 4.4; i += 0.2) 
	{ 
		cout << "i = " << i << endl;
	}



	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	
	system("pause");
	return 0;
}