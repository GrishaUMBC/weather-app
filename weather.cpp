#include <iostream>
using namespace std;

int main() {

    int temperature;

    cout << "What is the temperature?\n";
    cin >> temperature;

    if (temperature >= 65 && temperature <= 75) {
        cout << "It's Nice Outside" << endl;
    }
    else if (temperature < 65 && temperature > 0) {
        cout << "Don't Go Outside\n";
    }
    else {
        cout << "Extreme Temperatures\n";
    }
}