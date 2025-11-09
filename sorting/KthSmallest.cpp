#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int KthSmallest(vector<int> &arr, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi + 1 == k)
            return arr[pi];
        else if (pi + 1 < k)
            return KthSmallest(arr, pi + 1, high, k);
        else
            return KthSmallest(arr, low, pi - 1, k);
    }
    return -1; // If k is out of bounds
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    cout << "Unsorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    int k = 4;
    cout << "The " << k << "th smallest element is: "
         << KthSmallest(arr, 0, n - 1, k) << endl;
}
