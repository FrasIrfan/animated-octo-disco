#include <iostream>
#include <algorithm>
using namespace std;

void decimalToBinary() {

    int n, rem;
    string binary; // This will store our binary number

    cout << "Decimal to Binary Conversion" << endl;
    cout << "Enter Number" << endl;
    cin >> n;

    for (int i = 0; i < 100; i++)
    {
        rem = n % 2;
        n = n / 2;

        cout << "rem = " << rem << endl;
        binary.push_back(std::to_string(rem)[0]);

        if (n == 1) {
            break;
        }
        else if (n == 0) {
            break;
        }
    }

    cout << "rem = " << n << endl;

    reverse(binary.begin(), binary.end()); // Reverse the string `binary`
    cout << "Binary = " << n << binary << endl;
}

    int main ()
    {

        decimalToBinary();
        return 0;


    }
