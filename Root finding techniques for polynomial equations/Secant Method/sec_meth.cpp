#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double f(double x);    //declare the function for the given equation
double f(double x)    // give the equation
{
    double a=pow(x,2)-x-1.0;    //write the equation whose roots are to be determined
    return a;
}
int main()
{
cout.precision(4);
cout.setf(ios::fixed);        //set the precision of the output
double a,b,c,e;
cout<<"Enter the initial guess\na=";
cin>>b;
cout<<"b=\n";                
cin>>c;
cout<<"Enter the degree of accuracy\n";
cin>>e;                    
do
{    
    a=b;                
    b=c;                
    c=b-(b-a)/(f(b)-f(a))*f(b);    //calculate c
    if (f(c)==0)
    {
        cout<<"\nThe root of the equation is "<<c;   
        return 0;
    }
}while(abs(c-b)>=e);         
cout<<"\nThe root of the equation is "<<c;    
return 0;
}
