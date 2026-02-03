#include<iostream>
#include<vector>
#include <climits>

using namespace std;
int solve(vector<int>&arr,int i,int j,vector<vector<int>>&dp){
    // base condition
    if(i>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mincost = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int tempans = solve(arr,i,k,dp) + solve(arr,k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        if(tempans<mincost) mincost = tempans;
    }
    return dp[i][j]=mincost;
}
int main(){
    vector<int>arr = {40,20,30,10,30};
    int n =arr.size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    
    cout << solve(arr, 1, n-1,dp) << endl;
    return 0;

}