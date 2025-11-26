#include <iostream>
using namespace std;
int main() {
 int secret=7;  
    int guess;
do {
    cout << "Guess (1-20): ";
    cin >> guess;
    } while (guess != secret);

    cout << "Correct!";
    return 0;
}

