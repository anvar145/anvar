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
    const int ROWS = 10, COLS = 10;
    int arr[ROWS][COLS];
    srand(time(0));
    
    // Заполняем массив случайными числами в интервале [5, 61]
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            arr[i][j] = 5 + rand() % 57;

    // Сортируем первый столбец массива
    int firstCol[ROWS];
    for (int i = 0; i < ROWS; i++)
        firstCol[i] = arr[i][0];
    quickSort(firstCol, 0, ROWS - 1);
    for (int i = 0; i < ROWS; i++)
        arr[i][0] = firstCol[i];

    // Выводим массив
    cout << "Массив после сортировки первого столбца:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
