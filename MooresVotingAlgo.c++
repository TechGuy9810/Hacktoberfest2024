#include <iostream>
#include <vector>
using namespace std;

// Function to find the candidate for the majority element
int findCandidate(const vector<int>& arr) {
    int candidate = arr[0];
    int count = 1;

    // Step 1: Find the candidate
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    return candidate;
}

// Function to check if the candidate is actually the majority element
bool isMajority(const vector<int>& arr, int candidate) {
    int count = 0;

    // Count occurrences of the candidate in the array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return count > arr.size() / 2;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};

    // Step 1: Find the candidate
    int candidate = findCandidate(arr);

    // Step 2: Verify if the candidate is actually the majority element
    if (isMajority(arr, candidate)) {
        cout << "Majority element: " << candidate << endl;
    } else {
        cout << "No majority element found" << endl;
    }

    return 0;
}
