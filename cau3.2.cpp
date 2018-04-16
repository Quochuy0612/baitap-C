#include <iostream>

using namespace std;


int main (){
	int A, B, c;
	cout<<"Nhap So nguyen thu nhat : ";
	cin>>A;
	cout<<"Nhap So nguyen thu hai : ";
	cin>>B;
	c=A%B;
	cout<<"tong 2 so nguyen la :  "<<A+B<<endl;
	cout<<"hieu 2 so nguyen la :  "<<A-B<<endl;
	cout<<"tich 2 so nguyen la :  "<<A*B<<endl;
	if (c>0)
	cout<<"so thu nhat khong chia het cho so thu hai";
	else if (c=0)
	cout<<"thuog 2 so nguyen la :  "<<A/B;
}


