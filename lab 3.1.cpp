#include <iostream>
#include <cstdlib> // для функции rand() и srand()
#include <ctime>   // для функции time()

using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[1000];

    // Инициализируем генератор случайных чисел
    srand(time(0));

    // Заполняем массив случайными числами
    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 1000; // случайные числа от 0 до 999
    }

    // Выводим несортированный массив
    cout << "Несортированный массив:" << endl;
    for (int i = 0; i < 1000; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортируем массив
    quickSort(arr, 0, 999);

    // Выводим отсортированный массив
    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < 1000; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
