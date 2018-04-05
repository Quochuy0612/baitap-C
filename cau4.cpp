#include<iostream>

using namespace std;

int main()
{
	int n;
	int max;
	int a;
	int b;
	int c;

	cout << "nhap so nguyen duong :  ";
	cin >> n;
	a = n;
	max = a % 10;
	
	if (n<=10000)
	{
		if (a != 0)
		{
			b = a / 10;
			c = b % 10;
			a = b;
			if (max < c)
				max  = c;
		}
		cout << "so lon nhat la :  " <<max;
	}
	
	if (n>10000)
	cout << "so lon hon yeu cau!";
}

