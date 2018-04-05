#include <iostream>

using namespace std;

int main (){
	float a;
	float b;
	float c;
	float d;
	string e="Doan Van Quoc Huy";
	cout<<"Ten Sinh Vien:  "<<e<<endl;
	cout<<"Nhap diem mon toan:";
	cin>>a;
	cout<<"Nhap diem mon Ly:";
	cin>>b;
	cout<<"Nhap diem mon Hoa:";
	cin>>c;
	//câu a
	
	d=(a+b+c)/3;
	cout<<"Diem Trung Binh:"<<d<<endl;
	
	//câu b
	
	if(d>=8.0)cout<<"Xep loai xuat sac"; 
   else if((d>=7.0) && (d<8.0)) cout<<"Xep Loai Gioi"; 
   else if((d>=6.0) && (d<7.0))cout<<"Xep Loai Kha";
   else if((d>=5.0) && (d<6.0))cout<<"Xep Loai Trung Binh"; 
   else if(d<5.0) cout<<"Xep Loai yeu";

	
}
