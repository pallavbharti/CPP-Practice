#include<iostream>
using namespace std;
// step 1: n-1 to b , 2.big disk to destination  , 3. again n-1 to c;
void Hanoi(int n ,char a, char b , char c){
    if(n==0) return;
    Hanoi(n-1,'a','c','b');
    cout<<a <<"->"<<c<<endl;
    Hanoi(n-1,'b','a','c');
}


int main(){
    int n;
    cout<<"enter number of disks: ";
    cin>>n;
    Hanoi(n,'s','h','d');
}