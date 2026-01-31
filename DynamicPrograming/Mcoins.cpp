#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k,l,m;
    cin>>k>>l>>m;
    vector<bool>dp(1000005,0);
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(int i=2;i<=1000005;i++){       //winning and loosing state is stored here :
        if(i==k || i==l) continue;
        dp[i]=!(dp[i-1] && ((i-k>=1) ? dp[i-k]:1) && ((i-l>=1) ? dp[i-l]:1));
    }
    for(int i=1;i<m;i++){
        if(dp[i]==1) cout<<"A";
        else cout<<"B";
    }
}