#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void ArrayIns(int arr[], int i, int x, int &n) {
    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = x;
    n++;
}

int ArrayDel(int arr[], int pos, int &n) {
    int x = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return x;
}

int DeQueue(int arr[], int &n) {
   int x=arr[n-1];
   n=n-1;
   return x;
}

void EnQueue(int arr[], int &n, int x) {
    int i = 0;
    while (i < n && x < arr[i]) {
        i++;
    }
    ArrayIns(arr, i, x, n);
}

int main() {
    int n;
    cin >> n;
    int arr[100]; 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse(arr, n);
    EnQueue(arr, n, 12);
    int x = DeQueue(arr, n);
    reverse(arr, n);
    
    cout << "Array after operations: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nDeleted element is: " << x << "\n";

    return 0;
}
