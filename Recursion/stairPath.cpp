/*NOTE: One can jump either 1 or 2 steps at a time 
and we have to find number of ways for reaching to the top*/
#include <iostream>
using namespace std;
int stair(int n){
    if (n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);  
}

int main(){
    int n ;
    cout<<"enter number of stairs : " ;
    cin>>n;
    int s = stair(n);
    cout<<"Number of ways to reach top is  : "<<s;
}