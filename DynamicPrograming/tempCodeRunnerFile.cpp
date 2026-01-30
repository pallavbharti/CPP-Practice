#include<iostream>
#include<vector>
using namespace std;
int f(int n,vector<int>&dp){
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1)return dp[n];
    int ans = 0;
    for(int i=1;i<=6;i++){
        ans+=f(n-i,dp);
    }
    return dp[n] = ans;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"Dice combinations to form "<<n<<" is "<<f(n,dp)<<endl;
}