#include <bits/stdc++.h>
using namespace std;
  
// a structure to keep each pair of x and y together
struct Data {
    double x, y;
};
  
// Calculate inverse interpolation
  
double inv_interpolate(Data d[], int n, double y)
{
    // Initialize final x
    double x = 0;
  
    int i, j;
  
    for (i = 0; i < n; i++) {
  
        double xi = d[i].x;
        for (j = 0; j < n; j++) {
  
            if (j != i) {
                xi = (xi * (y - d[j].y)
                            / (d[i].y - d[j].y));
            }
        }
  
        x += xi;
    }
  
    return x;
}
  

int main()
{
  
    // Enter values of points in dataset
    Data d[] = { { 2.38, 3.46 },
                 { 2.57, 4.06 },
                 { 3.42, 4.61 },
                 { 3.77, 6.21 } 
                 { 4.29, 7.33 }};
  
    // Enter size of dataset
    int n = 5;
  
    //test y value
    double y = 4.05;
  
   //Inverse Interpolation function to find the value of x when y = 4.05
    cout << "Value of x at y = 4.05 : "
         << inv_interpolate(d, n, y);
  
    return 0;
}
