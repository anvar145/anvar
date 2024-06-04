#include <iostream>

#include <cstdlib>

#include <ctime>



using namespace std;



void selectionSortDescending(int arr[], int n) {

    for (int i = 0; i < n - 1; ++i) {

        int maxIndex = i;

        for (int j = i + 1; j < n; ++j) {

            if (arr[j] > arr[maxIndex]) {

                maxIndex = j;

            }

        }

        swap(arr[i], arr[maxIndex]);

    }

}



int main() {

    srand(static_cast<int>(time(0))); // Инициализация генератора случайных чисел

    const int size = 10; // Размер массива

    const int minValue = 0;

    const int maxValue = 100;

    

    int arr[size];

    

    // Заполнение массива случайными числами в диапазоне {0, 100}

    for (int i = 0; i < size; ++i) {

        arr[i] = rand() % (maxValue - minValue + 1) + minValue;

    }

    

    // Вывод неотсортированного массива

    cout << "Неотсортированный массив: ";

    for (int i = 0; i < size; ++i) {

        cout << arr[i] << " ";

    }

    cout << endl;

    

    // Сортировка массива по убыванию

    selectionSortDescending(arr, size);

    

    // Вывод отсортированного массива

    cout << "Отсортированный массив: ";

    for (int i = 0; i < size; ++i) {

        cout << arr[i] << " ";

    }

    cout << endl;

    

    return 0;

}
