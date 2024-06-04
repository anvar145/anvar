#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1;
        for (int j = low; j < high; j++)
            if (arr[j] <= pivot) swap(arr[++i], arr[j]);
        swap(arr[i + 1], arr[high]);
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main() {
    const int SIZE = 1000;
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
        arr[i] = 50 + rand() % 51;
    quickSort(arr, 0, SIZE - 1);
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    return 0;
}
