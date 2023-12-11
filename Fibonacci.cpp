#include <iostream>
using namespace std;

int main() {
    int start, n;

    cout << "Enter the starting point for Fibonacci series: ";
    cin >> start;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    int a = start, b = start + 1, nextTerm;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i) {
        cout << a << " ";

        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    cout << endl;

    return 0;
}
