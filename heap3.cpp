#include <iostream>

using namespace std;

void ins(int a[], int& n, int key) {
    n++;           // increase the size of the heap
    int i = n;     // set i to the index of the last element

    a[i] = key;    // insert the new element at the last position

    // keep swapping the new element with its parent until it becomes the root,
    // or until it is no longer greater than its parent
    while (i > 1 && a[i] > a[i / 2]) {
        int temp = a[i];
        a[i]= a[i/2];
        a[i/2] = temp;
        i = i / 2;
    }
}

int main() {
    int a[100] = {10, 20, 30, 25, 5, 40, 35};
    int n = 7;

    cout << "Before insertion: ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    ins(a, n, 50);

    cout << "After insertion: ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

