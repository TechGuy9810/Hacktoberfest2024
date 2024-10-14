#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays
void mergeArrays(vector<int>& arr1, vector<int>& arr2, vector<int>& mergedArray) {
    int i = 0, j = 0, k = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Merge the arrays into the mergedArray
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < n1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Create a merged array with size equal to sum of arr1 and arr2 sizes
    vector<int> mergedArray(arr1.size() + arr2.size());

    // Call the merge function
    mergeArrays(arr1, arr2, mergedArray);

    // Print the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < mergedArray.size(); i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
