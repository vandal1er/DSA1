#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Circle
{
    float radius;
};

int main()
{
    Circle circle1;
    cout << fixed << setprecision(2) << "Enter radius: ";
    cin >> circle1.radius;
    float r = circle1.radius;

    float circumference = r * 2 * M_PI;
    cout << "Circumference: " << circumference << endl;

    float area = r * r * M_PI;
    cout << "Area: " << area << "\n\n\n";

}
