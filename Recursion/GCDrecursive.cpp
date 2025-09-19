#include<iostream>
using namespace std;

int GCD(int a , int b){
    if(a==0) return b;
    else return GCD(b%a,a);
}
int main(){
    int a,b;
    cout<<"enter a and b: ";
    cin>>a >> b;
    cout<< "GCD is : "<<GCD(a,b);
}