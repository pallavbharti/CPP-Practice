# include <iostream>
using namespace std;
void find(int n , int *a , int *b){
    *b = n % 10; 
    while(n>9){
        n = n/10;
    }
    *a=n;
    return;
}
int main (){
    int a , b , n;
    cout<< " enter n : ";
    cin>>n;
    find(n,&a,&b);
    cout << "first : " << a << "last digit"  << b;


}