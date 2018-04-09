#include <iostream> 

#include <cmath>

using namespace std;

	float delta(float A, float B, float C)
{
	return B*B-4*A*C;
}

int main (){

	float a, b, c, kq, d, x1, x2;
	cout<<"Giai Phuong Trinh Bac Hai!"<<endl;
	cout<<"Nhap so a :  ";
	cin>>a;
	cout<<"Nhap so b :  ";
	cin>>b;
	cout<<"Nhap so c :  ";
	cin>>c;
	d = delta (a, b, c);
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	if (a==0)
	{
	if (b!=0 && c!=0)
	cout <<"nghiem cau pt:"<< (-c/b)<<endl;
	
	else if (b==0 && c==0)
	cout <<"vo so nghiem!";
	
	else if (b==0 && c!=0)
	cout <<"pt vo nghiem!";
	}
	
	
	
	else if(a!=0)
	{
		if (d<0)
		cout <<"pt vo nghiem!";
		else if(d>0)
		cout <<"pt co 2 nghiem"<<endl;
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}		
	else if(d==0)
	cout <<"pt co nghiem kep"<<(float)(-b/2*a);
}

	

