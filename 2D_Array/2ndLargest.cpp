# include <iostream>
using namespace std;
#include<climits>
int main(){
    int m,n,max=INT_MIN;
    cout<<"enter number of rows and columns : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter elements: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
        
    }
    cout<<"Max element is : " << max << endl;

    int secmax=0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(secmax<arr[i][j] && arr[i][j]!=max ){
                secmax=arr[i][j];
            }
        }
        
    }
    cout<<"Second Max element is : " << secmax;
    
}