# include <iostream>
using namespace std;
int main(){
    cout<< "enter size of an array : ";
    int n;
    cin >> n;
    int marks[n];
    cout<< "enter marks : ";
    for (int i=0 ; i<n;i++){
        cin>> marks[i];
    }

    for (int i=0 ; i<n;i++){
        if (marks[i]<35)
        {
            cout<< marks[i]<< endl;
        }
        
        
    }
}