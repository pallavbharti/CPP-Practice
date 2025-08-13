#include <iostream>
using namespace std;
#include<vector>
vector<vector<int>>Transpose(vector<vector<int>>&v){
    int n=v.size(); // number of rows original matrix
    int m=v[0].size(); // number of column of original matrix
    vector<vector<int>> res(m,vector<int>(n)); 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=v[j][i];
        }
    }
return res;
}
int main(){
    int m, n;
    cout<<"Enter m and n : ";
    cin>>m>>n;
    vector <vector<int>> v(m,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }   
    }
    cout<<"original matrix is : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "  ";
        }  
        cout<<endl; 
    }

    vector<vector<int>>Transposed =Transpose(v);

    cout<< "Transposed matrix is : " << endl;
    for (int i = 0; i < Transposed.size(); i++)
    {
        for (int j = 0; j < Transposed[0].size(); j++)
        {
            cout << Transposed[i][j] << "  ";
        }  
        cout<<endl; 
    }

    
}