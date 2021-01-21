#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    bool check = false;
    
    for (long int i = p; i <= q; i++) {
        long int temp = i*i;
        long int p;
        if (i < 10) {
            p = 10;
        }
        else if (i < 100) {
            p = 100;
        }
        else if (i < 1000) {
            p = 1000;
        }
        else if (i < 10000) {
            p = 10000;
        }
        else if (i < 100000) {
            p = 100000;
        }
        temp = temp / p + temp % p;

        if (temp == i) {
            cout << i << " ";
            check = true;
        }
    }

    if (check == false) {
        cout << "INVALID RANGE";
    }
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
