#include<iostream>

using namespace std;

int main()
{
	int n=7;
	int a[n];
	int max;
	int min;
	int b;
	int c;
	for(int i=0;i<n;i++)
	{
	cout<<"nhap so "<<i<<" :  ";
	cin>>a[i];
	}
	
	//câu a
	
	cout<<"so lon nhat la:";
	max=a[1];
	for(int i=0;i<n;i++)
	if(a[i]>max)
	 max=a[i];
    cout<<max;
    
    cout<<endl;
    
    //câu b
    
    cout<<"so nho nhat la:";
    
    min=a[2];
    for(int i=0;i<n;i++)
    if(a[i]<min)
	 min=a[i];
    cout<<min;
    
    cout<<endl;
	
	//câu c
	
	cout<<"sap xep tu lon den nho:";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(a[i]>a[j])
			{
			b=a[i];
			a[i]=a[j];
			a[j]=b;
		}
	}
	for(int i=0;i<n;i++)
	cout<<"  "<<a[i];
	
	 cout<<endl;
	
	//câu d
	
	cout<<"sap xep tu nho den lon:";
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
		if(a[i]<a[j])
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	for(int i=0;i<n;i++)
	cout<<"  "<<a[i];

}
