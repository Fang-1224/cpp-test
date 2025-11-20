#include <iostream>
using namespace std;

int accumulate(int n);

int main() {
    int number = 100;
    cout << "從1加到" << number << "總合為: " << accumulate(number) << endl;
    return 0;
}

int accumulate(int n) {
    if (n == 1) {
        return 1;  // Base case: sum of 1 is just 1
    }
    return n + accumulate(n - 1);  // Recursively accumulate the sum
}
