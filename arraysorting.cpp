#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, choice;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Choose sorting order:\n1. Ascending\n2. Descending\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        sort(arr.begin(), arr.end());
        cout << "Array sorted in ascending order: ";
    } else if (choice == 2) {
        sort(arr.begin(), arr.end(), greater<int>());
        cout << "Array sorted in descending order: ";
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    displayArray(arr);

    return 0;
}
