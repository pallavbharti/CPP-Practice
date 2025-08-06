#include <iostream>
using namespace std;
void displayN_1(int n){
    if (n==0) return ;
    cout<<n<<" ";
    displayN_1(n-1);
    
}
void display1_n(int n) {
    if (n==0) return ;
    display1_n(n-1);
    cout<<n<<" ";

}
int main(){
    int n ;
    cout<<"enter number : " ;
    cin>>n;
    display1_n(n);
    cout<<endl;
    displayN_1(n);

}