#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pre[n], suf[n];
    int product; 

    //  Prefix product array
    pre[0] = 1;   
    product = arr[0];  
    for (int i = 1; i < n; i++) {
        product *= arr[i - 1]; 
        pre[i] = product;      
    }
    
    // Suffix product array
    suf[n - 1] = 1;  
    product = suf[n-1];    
    for (int i = n - 2; i >= 0; i--) {
        product *= arr[i + 1];  
        suf[i] = product;       
    }

    // Multiply prefix and suffix to get product except self
    cout << "Product Except Self: ";
    for (int i = 0; i < n; i++) {
        cout << pre[i] * suf[i] << " ";
    }
}
