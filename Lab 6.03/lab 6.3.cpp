#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double value;
    double sum = 0;
    double sumOfSquares = 0;
    double standardDeviation = 0;
    double count = 0, Q = 0;

    cout << "Enter numbers - Q to quit " << endl;

    while (true) {
        cin >> value;
        if (value == Q) {
            break;
        }
        sum += value;
        sumOfSquares += value * value;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        standardDeviation = sumOfSquares - (1/count) * (sum * sum);
        standardDeviation = sqrt(standardDeviation / (count - 1));

        cout << "Count: " << count << endl;
        cout << "Average: " << average << endl;
        cout << "Standard Deviation: " << standardDeviation << endl;
    }
    else {
        cout << "No values were entered." << endl;
    }

    return 0;
}