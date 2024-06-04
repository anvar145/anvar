#include <iostream>

using namespace std;



void print_increasing(int A, int B) {

    if (A > B) return;

    cout << A << endl;

    print_increasing(A + 1, B);

}



void print_decreasing(int A, int B) {

    if (A < B) return;

    cout << A << endl;

    print_decreasing(A - 1, B);

}



int main() {

    int A, B;

    cout << "Введите число A: ";

    cin >> A;

    cout << "Введите число B: ";

    cin >> B;



    if (A < B) {

        print_increasing(A, B);

    } else {

        print_decreasing(A, B);

    }

    return 0;

}
