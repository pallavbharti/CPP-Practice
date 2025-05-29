# include <iostream>
using namespace std;

int main(){
    int x ,y;
    cout<<"enter x and y : ";
    cin>>x;
    cin>> y;
    int * p = &x;
    int * q= &y;
    
    cout<< "sum using pointer is : "<< *p + *q ;
}