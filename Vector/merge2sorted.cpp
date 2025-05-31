#include<iostream>
using namespace std;
#include<vector>
vector<int>merge(vector<int>&a , vector<int>&b){
    int m=a.size();
    int n=b.size();
    int i=0,j=0,k=0;
    vector<int>res(m+n);
    while (i<m && j<n){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;k++;
        }
        else{
            res[k]=b[j];
            j++;k++;
        }

        if(i==m){
            while (j<n)
            {
                res[k]=b[j];
                j++;k++;
            }
            
            
        }
        if(j==n){
            while (i<m)
            {
                res[k]=a[i];
                i++;k++;
            }
        }
    }
    return res;
    
}
int main(){
    int m,n;
    cout<<"enter size of a : ";
    cin>>m;
    vector<int>a(m);
    cout<< "enter element of a : ";
    for(int i=0 ; i<m ; i++){
        cin>>a[i];
    } 

    cout<<"enter size of b : ";
    cin>>n;
    vector<int>b(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    } 
    vector<int> v = merge(a,b);
    for (int i = 0; i < (m+n); i++)
    {
        cout<<v[i]<< "  " ;
    }
    
}