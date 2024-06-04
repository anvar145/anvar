#include <iostream>

using namespace std;



void print_numbers(int n) {

    if (n > 0) {

        print_numbers(n - 1);

        cout << n << endl;

    }

}



int main() {

    int n;

    cout << "Введите число n: ";

    cin >> n;

    print_numbers(n);

    return 0;

}

