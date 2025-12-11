#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =4,sum=0;
    int maxSum =INT_MIN;
    int maxIdx =-1;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i]; 
    }
    maxSum = sum;
    int i =0 , j =k;
    while(j < n){
        sum = sum +arr[j]- arr[i];
        if(sum > maxSum) maxSum = sum;
        maxIdx = i;
        i++ ; j++;   
    }
    cout<<maxSum<<"  " <<"At idx : "<< maxIdx <<endl;
    
}