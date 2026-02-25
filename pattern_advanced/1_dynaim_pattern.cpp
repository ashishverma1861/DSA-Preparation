#include <iostream>
using namespace std;

int main() {
    int n =7;
    // cin >> n;

    // PART 1: Pyramid (@)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++){
            cout << "@"; 
        }
        cout << endl;
    }

    // // PART 2: Mixed pattern
    // for (int i = 0; i < n; i++){

    //     // Left stars
    //     for (int j = 0; j < (n/2) + 1; j++){
    //         if (j >= n / 2 - i && j >= i - n / 2)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     // Middle part
    //     for (int j = 0; j < n; j++){
    //         if (i == n / 2)
    //             cout << "@";
    //         else
    //             cout << " ";
    //     }

    //     // Right stars
    //     for (int j = 0; j < (n/2) + 1; j++){
    //         if (j >= n / 2 - i && j >= i - n / 2)
    //             cout << "*";
    //     }

    //     cout << endl;
    // }

    return 0;
}