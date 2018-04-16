#include <iostream>

using namespace std;

int dientich(int R)
{
	return 4 * (R*R);	
}
float thetich(float B)
{
	return (B*B*B*4)/3;
}
int main (){
	int a, b;
	float c;
	cout<<"Nhap So R : ";
	cin>>a;
	b=dientich(a);
	c=thetich(a);
	cout<<"dien tich :  "<<b<<endl;
	cout<<"the tich :  "<<c;	
}
