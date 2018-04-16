#include <iostream>

using namespace std;

int binhphuong(int a)
{
	return (a*a);	
}
int lapphuong(int b)
{
	return (b*b*b);	
}
int mubon(int c)
{
	return (c*c*c*c);	
}

int main (){
	int a, b;
	float c;
	cout<<"Nhap So R : ";
	cin>>a;
	a=binhphuong(a);
	b=lapphuong(a);
	c=mubon(a);
	cout<<"binhphuong :  "<<a<<endl;
	cout<<"lapphuong :  "<<b<<endl;
	cout<<"mubon :  "<<c;	
}
