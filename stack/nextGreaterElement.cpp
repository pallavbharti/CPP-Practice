#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i] <<" ";
}
cout<<endl;


stack<int> st;

ans[n-1]=-1;
st.push(arr[n-1]);

    // Pop , Ans , Push 
//pop
    for(int i=n-2;i>=0;i--){
        while (st.size()>0 && st.top() <= arr[i]) 
        {
           st.pop();
        }
    
//Ans
    if(st.size()==0) ans[i]=-1;
    else ans[i]=st.top();

// Push
    st.push(arr[i]);
}
cout<<"next greatest element :"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<ans[i] <<" ";
}

}