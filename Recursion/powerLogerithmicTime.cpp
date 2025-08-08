#include <iostream>
using namespace std;
int power(int a, int b){
    if (b==0) return 1;
    int ans =power(a,b/2);
    if(b%2==0)return ans*ans;
    if(b%2!=0)return ans*ans*a;
}
int main(){
    int a,b;
    cout<<"enter a : " ;
    cin>>a;
    cout<<"enter b : " ;
    cin>>b;
    int p = power(a,b);
    cout<<"a raise to the power b is : "<<p;
}