#include <iostream>
#include <limits> // For std::numeric_limits
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    cout << "Enter the amount of integers to sum = ";
    while (!(cin >> k)) {
        cout << "error. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), 'n');
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        while (!(cin >> number)) {
            cout << "error. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), 'n'); 
        }
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;

    return 0;
}
