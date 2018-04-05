#include <iostream> 
#include<math.h> 

using namespace std;

int main(){
	int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int tong;
	
	//câu a
	cout<<"tu 1 -> 20:  ";
	for (int i=0; i<20;i++)
	{
	cout<<a[i]<<"  ";
	}
	cout<<endl;
	
	//câu b

	cout<<"tu 20 -> 1:  ";
	for (int i=19; i>=0;i--)
	{
	cout<<a[i]<<"  ";
	}
	cout<<endl;
	
	//câu c
	
	cout<<"so chan:  ";
	for (int i=1; i<=19;i+=2)
	{
	cout<<a[i]<<"  ";
	}
	cout<<endl;
	
	//câu d
	
	cout<<"so le:  ";
	for (int i=0; i<=19;i+=2)
	{
	cout<<a[i]<<"  ";
	}
	cout<<endl;
	
	//câu e
	cout<<"so nguyen to:  ";
	for (int i=2; i<20; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
                cout << i <<"  ";
            }
        }
    cout<<endl;
    
    
    
	//câu f

	cout<<"tong:  ";
    for(int i=0;i<=19;i++)
    tong=tong+a[i];
    cout<<tong<<"  ";

} 
