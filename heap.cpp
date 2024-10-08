#include <iostream>
using namespace std;


void insert(int myArray[], int &n, int value) {
    if (n == 100) {
        cout << "Heap is full. Cannot insert!" << endl;
        return;
    }

    n++;
    myArray[n - 1] = value;

    int i = n - 1;
    while (i != 0 && myArray[(i - 1) / 2] < myArray[i]) {
        swap(myArray[i], myArray[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}


void print(int heap[], int n) {
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {
    
    int arr[5] = {20, 15, 30, 40, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int myArray[100];
    int n = 0;
    
for(int i = 0; i < size ; i++){
        insert(myArray, n, arr[i]);
    }
    
    // insert(myArray, n, 20);
    // insert(myArray, n, 15);
    // insert(myArray, n, 30);
    // insert(myArray, n, 40);
    // insert(myArray, n, 10);

    cout << "Max-Heap array after insertions: ";
    print(myArray, n);

    return 0;
}



// 2nd approach

#include <iostream>
using namespace std;

void heap(int myArray[], int n, int i) {
    while (true) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && myArray[left] > myArray[largest])
            largest = left;

        if (right < n && myArray[right] > myArray[largest])
            largest = right;

        if (largest != i) {
            swap(myArray[i], myArray[largest]);
            i = largest;
        } else {
            break;
        }
    }
}

void insert(int myArray[], int &n, int value) {
    if (n == 100) {
        cout << "Heap is full. Cannot insert!" << endl;
        return;
    }

    n++;
    myArray[n - 1] = value;

    int i = n - 1;
    while (i != 0 && myArray[(i - 1) / 2] < myArray[i]) {
        swap(myArray[i], myArray[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}


void print(int heap[], int n) {
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {
    int myArray[100]
    int n = 0;

    
    insert(myArray, n, 20);
    insert(myArray, n, 15);
    insert(myArray, n, 30);
    insert(myArray, n, 40);
    insert(myArray, n, 10);

    cout << "Max-Heap array after insertions: ";
    print(myArray, n);

    return 0;
}

// Deletion

#include <iostream>
using namespace std;

void insert(int myArray[], int &n, int value) {
    if (n == 100) {
        cout << "Heap is full. Cannot insert!" << endl;
        return;
    }

    n++;
    myArray[n - 1] = value;

    int i = n - 1;
    while (i != 0 && myArray[(i - 1) / 2] < myArray[i]) {
        swap(myArray[i], myArray[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void heapify(int myArray[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && myArray[left] > myArray[largest])
        largest = left;

    if (right < n && myArray[right] > myArray[largest])
        largest = right;

    if (largest != i) {
        swap(myArray[i], myArray[largest]);
        heapify(myArray, n, largest);
    }
}

void deleteRoot(int myArray[], int &n) {
    if (n <= 0) {
        cout << "Heap is empty. Cannot delete!" << endl;
        return;
    }

    myArray[0] = myArray[n - 1];
    n--;

    heapify(myArray, n, 0);
}

void print(int heap[], int n) {
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {20, 15, 30, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int myArray[100];
    int n = 0;

    for (int i = 0; i < size; i++) {
        insert(myArray, n, arr[i]);
    }

    cout << "Max-Heap array after insertions: ";
    print(myArray, n);

    deleteRoot(myArray, n);
    cout << "Max-Heap array after deleting the root: ";
    print(myArray, n);

    return 0;
}

// 2nd Approach

#include <iostream>
using namespace std;

void insert(int myArray[], int &n, int value) {
    if (n == 100) {
        cout << "Heap is full. Cannot insert!" << endl;
        return;
    }

    n++;
    myArray[n - 1] = value;

    int i = n - 1;
    while (i != 0 && myArray[(i - 1) / 2] < myArray[i]) {
        swap(myArray[i], myArray[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void deleteRoot(int myArray[], int &n) {
    if (n <= 0) {
        cout << "Heap is empty. Cannot delete!" << endl;
        return;
    }

    myArray[0] = myArray[n - 1];
    n--;

    int i = 0;
    while (true) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && myArray[left] > myArray[largest])
            largest = left;

        if (right < n && myArray[right] > myArray[largest])
            largest = right;

        if (largest != i) {
            swap(myArray[i], myArray[largest]);
            i = largest;
        } else {
            break;
        }
    }
}


void print(int heap[], int n) {
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {20, 15, 30, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int myArray[100];
    int n = 0;

    
    for (int i = 0; i < size; i++) {
        insert(myArray, n, arr[i]);
    }

    cout << "Max-Heap array after insertions: ";
    print(myArray, n);

    
    deleteRoot(myArray, n);
    cout << "Max-Heap array after deleting the root: ";
    print(myArray, n);

    return 0;
}
