#include <iostream>

using namespace std;

int giaithua(int n)

{
    long gt=1;
    for(int i=1;i<=n;i++)
        gt=gt*i;

    return gt;

}

int main()
{
	int a;
 	cout<<"nhap so :"<<endl;
 	cin>>a;
 	cout<<"ket qua cua so vua nhap = "<<giaithua(a)<<endl;
 	return 0;
}
