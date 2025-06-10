#include <iostream>
using namespace std;
int main() {
    float weight, height;
    cin >> weight >> height;
    cout << "Your BMI is " << weight / (height * height) << endl;
    return 0;
}
