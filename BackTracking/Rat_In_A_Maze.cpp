#include<bits/stdc++.h>
using namespace std;
 
int ans;
bool CanWeGo(vector<vector<int>> grid , int n ,int i, int j){
    return i>=0 && j>=0 && i<n && j<n  && grid[i][j]==0 ;
}

void f(vector<vector<int>> &grid , int n ,int i, int j){
    //Base Case: 
    if(i == n-1 && j == n-1){
        ans += 1;
        return;
    }
    // step 2: let visited place as 2:
    grid[i][j] = 2;   //visited
    //left
    if(CanWeGo(grid,n,i,j-1)){
        f(grid,n,i,j-1);
    }
    //up
    if(CanWeGo(grid,n,i-1,j)){
        f(grid,n,i-1,j);
    }
    //right
    if(CanWeGo(grid,n,i,j+1)){
        f(grid,n,i,j+1);
    }
    //down
    if(CanWeGo(grid,n,i+1,j)){
        f(grid,n,i+1,j);
    }
     
    grid[i][j]=0;   // backtracking

}

int RatInaMaze(vector<vector<int>> grid , int n ){
    ans = 0;
    f(grid,n,0,0);
    return ans;
}

int main(){

    vector<vector<int>> grid = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<< RatInaMaze(grid,7);
    return 0;

}