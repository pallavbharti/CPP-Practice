#include<iostream>
using namespace std;

int countSetBits(int n){
    int count =0;
    while(n>0){
        count++;
        n = n & (n-1);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    //cout<<__builtin_popcount(n)<<endl;
    cout<< countSetBits(n)<<endl;
}