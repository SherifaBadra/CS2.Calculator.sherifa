#include <iostream>
#include "calculator.h"

using namespace std;
using namespace Calculator;

int main() {
    cout << "Testing Calculator Functions:\n";

    double a = 10, b = 5;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Division: " << divide(a, b) << endl;

    int num = 5;
    cout << "Factorial of " << num << ": " << factorial(num) << endl;

    int x = 36, y = 24;
    cout << "GCD of " << x << " and " << y << ": " << gcd(x, y) << endl;
    cout << "LCM of " << x << " and " << y << ": " << lcm(x, y) << endl;

    cout << "Random number between 1 and 100: " << randomInRange(1, 100) << endl;

    return 0;
}

