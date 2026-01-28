#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> getdigit(int n){
    vector<int>digits;
    while(n>0){
        digits.push_back(n%10);
        n=n/10;
    }
    return digits;
}

int f(int n,vector<int> &dp){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> d = getdigit(n);
    int ans = INT_MAX;

    for(int i=0;i<d.size();i++){
        if(d[i]!=0){
            ans = min(ans, 1 + f(n - d[i],dp));
        }
    }
    return dp[n]=ans;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int> dp(n+1, -1);
    cout << f(n,dp) << endl;
}
