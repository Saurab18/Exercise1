#include <iostream>
using namespace std;
int main() {
    string colour[4] = { "st", "nd", "rd", "th"};
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;

    int lastDigit = n % 10;
    if (n >= 0 && n <= 3) {
        if (n == 1)
            cout << n << colour[0] << "\n";
        else if (n == 2)
            cout << n << colour[1] << "\n";
        else
            cout << n << colour[2] << "\n";
    }
    else
        cout << n << colour[3] << "\n";


    return 0;

}
