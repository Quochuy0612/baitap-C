#include <iostream>

using namespace std;

void dectobin(int n){
     if (n > 0){
        dectobin(n/2);
        cout <<n%2;
     }
}
int main(){
	int n;
    cout <<"Nhap n: ";
    cin >>n;
    cout <<"Chuyen co so: ";
	dectobin(n);
    cout <<endl;
}
