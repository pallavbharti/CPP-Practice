#include <iostream>
#include <vector>
using namespace std;

void cyclicSort(vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        int correctIdx = arr[i] - 1;
        if (i == correctIdx)
            i++;
        else
            swap(arr[i], arr[correctIdx]);
    }
} 

int main() {
    vector<int> arr = {1,3,6,4,5,2};
    int n = arr.size();

    cout << "Before sort: ";
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    cyclicSort(arr);

    cout << "After sort: ";
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}
