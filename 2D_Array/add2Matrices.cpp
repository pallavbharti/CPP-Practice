# include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows and columns of both matrix : ";
    cin>>m>>n;
    int arr[m][n];
    int brr[m][n];
    
    cout<<"enter elements of matrix A: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter elements of matrix B: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>brr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j]+=arr[i][j];
        }
    }
    
    cout<<"Sum of A nd B matrix : "<< endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<brr[i][j] <<"  ";
        }
        cout << endl;
    }

}