#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "�f�����������鐔�l����͂��Ă�������: ";

    int n;
    int i = 2;
    cin >> n;

    if (n < 1) {
        cout << "1���傫�����l����͂��Ă�������";
        return 0;
    }

    cout << endl;

    while (n >= i * i) {
        if (n % i == 0) {
            cout << setfill('0') << right << setw(4) << i << " | " << n << endl;
            n /= i;
            continue;
        }
        i++;
    }
    cout << "    " << "   " << n << endl;
    return 0;
}