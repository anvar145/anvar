#include <iostream>

#include <string>



using namespace std;



// Функция для сортировки выбором

void selectionSort(string arr[], int n) {

    for (int i = 0; i < n - 1; ++i) {

        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {

            if (arr[j] < arr[minIndex]) {

                minIndex = j;

            }

        }

        swap(arr[i], arr[minIndex]);

    }

}



int main() {

    const int size = 5; // Размер массива

    string phoneNumbers[size] = {

        "23-45-67", "12-34-56", "98-76-54", "34-56-78", "11-22-33"

    };

    

    // Вывод неотсортированного списка телефонных номеров

    cout << "Неотсортированный список телефонов: ";

    for (int i = 0; i < size; ++i) {

        cout << phoneNumbers[i] << " ";

    }

    cout << endl;

    

    // Сортировка списка телефонных номеров

    selectionSort(phoneNumbers, size);

    

    // Вывод отсортированного списка телефонных номеров

    cout << "Отсортированный список телефонов: ";

    for (int i = 0; i < size; ++i) {

        cout << phoneNumbers[i] << " ";

    }

    cout << endl;

    

    return 0;

}
