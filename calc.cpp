﻿#include <iostream>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "Введіть перше число\n";   cin >> a;

    cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";  cin >> op;

    cout << "Введіть друге число\n";     cin >> b;

    switch (op) {

    case 1:     a - b;

        break;

    case 2:    a + b;

        break;

    case 3:     a * b;

        break;

    case 4:     a / b;

        break;

    }

    cout << "Результат = " << result;

}