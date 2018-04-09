#include <iostream>
#include <cmath>

using namespace std;

bool songuyenTo(int soA) 
{
	if (soA < 2)
	{
		return false;
	}
	else if (soA>2)
	{
		if (soA % 2 == 0)  
		{
			return false;
		}
		for (int i=3;i<sqrt((float)soA); i += 2)  
		{
			if (soA%i == 0)  
			{
				return false;
			}
		}
	}
	return true;
}
int main(int argc, char ** argv)
{
	int n;
	cout<<"Nhap so can kiem tra ?"<< endl;
	cin>>n;
	if (songuyenTo(n) == true)
	{
		cout<<"So "<<n<<"  "<<"la so nguyen to!!!!"<<endl;
	}
	else
	{
		cout<<"So"<<n<<"  "<<"  khong phai la so nguyen to!!!!"<<endl;
	}
	system("pause");
	return 0;
}
