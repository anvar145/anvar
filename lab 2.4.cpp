#include <iostream>

using namespace std;



void print_prime_factors(int n, int divisor = 2) {

    if (n < 2) return; // базовый случай

    if (n % divisor == 0) {

        cout << divisor << " ";

        print_prime_factors(n / divisor, divisor);

    } else {

        print_prime_factors(n, divisor + 1);

    }

}



int main() {

    int n;

    cout << "Введите число n: ";

    cin >> n;

    print_prime_factors(n);

    cout << endl;



    return 0;

}
