#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pr[n], suf[n];

    pr[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pr[i] = pr[i - 1] * arr[i];
    }

    cout << "Prefix product: ";
    for (int i = 0; i < n; i++) {
        cout << pr[i] << " ";
    }
    cout << endl;

    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = arr[i] * suf[i + 1];
    }

    cout << "Suffix product: ";
    for (int i = 0; i < n; i++) {
        cout << suf[i] << " ";
    }
}
