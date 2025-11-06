#include <iostream>
using namespace std;

#define MAX 100 


void insertion(int arr[], int &n, int pos, int value) {
    if (n >= MAX) {
        cout << "Array is full. Cannot insert.\n";
        return;
    }
    if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;
}


void deletion(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position.\n";
        return;
    }

    
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
}

void traversal(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nInitial Array: ";
    traversal(arr, n);


    int pos, val;
    cout << "\nEnter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;
    insertion(arr, n, pos, val);
    cout << "Array after insertion: ";
    traversal(arr, n);


    cout << "\nEnter position to delete: ";
    cin >> pos;
    deletion(arr, n, pos);
    cout << "Array after deletion: ";
    traversal(arr, n);

    return 0;
}
