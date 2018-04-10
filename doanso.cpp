#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){
	
	int a, b, c, Max=100, Min=1;
    srand(time(NULL));
    b = (rand()%(Max - Min + 1)) + Min;
    cout<<"tro choi doan so!!!"<<endl;

    do
{
	cout<<"nhap mot so bat ki"<<endl;
    cin>>a;
                                               
    if (a > b)
	{
		cout<<"So bi mat nho hon so vua nhap"<<endl;
   		c++;
   		cout<<endl;
	}

    else if (a < b)
	{
    	cout<<"So bi mat lon hon so so vua nhap"<<endl;
    	c++;
		cout<<endl;
	}
	
    else
    	cout<<"Chuc mung ban da tim duoc so bi mat, so lan doan so bi mat cua ban la %d \n"<<c;
    
    
}	while (a != b);




}








