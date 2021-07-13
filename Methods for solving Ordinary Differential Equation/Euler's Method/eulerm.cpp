#include <iostream>
using namespace std;
 
// Enter a differential equation
// dy/dx=(x + y)
float func(float x, float y)
{
    return (x + y);
}
 
// Function for Euler formula
void euler(float x0, float y, float h, float x)
{
    float temp = -0;
 
    while (x0 < x) {
        temp = y;
        y = y + h * func(x0, y);
        x0 = x0 + h;
    }
 
    
    cout << "Approximate solution at x = "
         << x << "  is  " << y << endl;
}
 
int main()
{
    // Initial Values
    float x0 = 0;
    float y0 = 1;
    float h = 0.1;
 
    // Value of x at which we'll find approx solution
    float x = 0.12;
 
    euler(x0, y0, h, x);
    return 0;
}
