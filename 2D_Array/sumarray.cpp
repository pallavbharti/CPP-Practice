# include <iostream>
using namespace std;
#include<climits>
int main(){
    int m,n,max=INT_MIN;
    int sum=0;
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
            sum+=arr[i][j];
        }
    }
    cout<<"sum is : " << sum;
}