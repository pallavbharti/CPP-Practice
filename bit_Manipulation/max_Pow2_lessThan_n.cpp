#include <iostream>
using namespace std ;
int main (){
    int n;
    cin>>n;
    int temp = 0;
    while(n>0){
        temp = n;
        n = n & (n-1);
    }
    cout<<temp<<endl;
    return 0;
}