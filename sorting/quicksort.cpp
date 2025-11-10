#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
   int pivot = arr[high]; // Choosing the last element as the pivot
   int i = low - 1; // Pointer for smaller elements
   for (int j = low; j < high; j++) {
       if (arr[j] <= pivot) {
           i++;
           swap(arr[i], arr[j]); // Swap elements smaller than pivot
       }
   }
   swap(arr[i + 1], arr[high]); // Place pivot in its correct position
   return i + 1; // Return the partition index
}

void quickSort(vector<int> &arr, int low, int high) {
   if (low < high) {
       int pi = partition(arr, low, high); // Partition index
       quickSort(arr, low, pi - 1); 
       quickSort(arr, pi + 1, high); 
   }
}
int main() {
   vector<int> arr = {10, 7, 8, 9, 1, 5};
   int n = arr.size();
   cout<<"Unsorted array: ";
   for (int i : arr) {
       cout << i << " ";
   }
   cout << endl << "Sorted array: ";
   quickSort(arr, 0, n - 1);
  
   for (int i : arr) {
       cout << i << " ";
   }
   
}