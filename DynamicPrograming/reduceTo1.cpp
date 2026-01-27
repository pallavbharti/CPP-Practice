#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#define infinity INT_MAX

int f(int n, vector<int> &dp){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n]= 1 + min({
        f(n-1,dp),
        (n % 2 == 0) ? f(n/2,dp) : infinity,
        (n % 3 == 0) ? f(n/3,dp) : infinity
    });
}

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << f(n,dp) << endl;
    return 0;
}
