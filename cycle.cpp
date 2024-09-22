#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    float a = 0.0288;
    float b = 0.032;
    float t = 15.7;
    int k = 0;
    float v;
    while (k < 8) {
        cout << "¬ведите значение v" << ++k << ": ";
        cin >> v;
        float p = (((0.0635 * t) / (v - b)) - a / pow(v, 2));
        cout << "«начение p" << k << " = " << p << "\n" << endl;
    }
    return 0;
}
