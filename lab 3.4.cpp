#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// Функция сравнения для qsort
int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    // Массив строк, представляющих имена студентов
    const int NUM_STUDENTS = 10;
    const char* students[NUM_STUDENTS] = {
        "Иванов", "Петров", "Сидоров", "Александров", "Кузнецов",
        "Попов", "Смирнов", "Васильев", "Михайлов", "Новиков"
    };

    // Выводим исходный список студентов
    cout << "Список студентов до сортировки:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << students[i] << endl;
    }

    // Сортируем массив строк с использованием qsort
    qsort(students, NUM_STUDENTS, sizeof(const char*), compare);

    // Выводим отсортированный список студентов
    cout << "\nСписок студентов после сортировки:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << students[i] << endl;
    }

    return 0;
}
