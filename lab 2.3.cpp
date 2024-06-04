#include <iostream>

using namespace std;



int sum_of_digits(int N) {

    if (N == 0) {

        return 0;

    } else {

        return (N % 10) + sum_of_digits(N / 10);

    }

}



int main() {

    int N;

    cout << "Введите число N: ";

    cin >> N;



    int result = sum_of_digits(N);

    cout << "Сумма цифр числа: " << result << endl;



    return 0;

}
