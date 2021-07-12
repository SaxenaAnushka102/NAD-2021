#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x);    //declare the function for the given equation
double f(double x)    //give the equation
{
    double a=pow(x,2)-x-1.0; //write the equation whose roots are to be determined
    return a;
}
int main()
{    
    cout.precision(4);        //value of desired precision
    cout.setf(ios::fixed);
    double a,b,c,e,fa,fb,fc;    
    a:cout<<"Enter the initial guesses:\na=";    
    cin>>a;
    cout<<"\nb=";            
    cin>>b;
    cout<<"\nEnter the value of desired accuracy"<<endl;    //Enter the accuracy
    cin>>e;                
    if (f(a)*f(b)>0)        
    {                
        cout<<"Please enter a different intial guess"<<endl;
        goto a;           
    }
    else                
    {
while (fabs(a-b)>=e)

    {
        c=(a+b)/2.0;   
        fa=f(a);        
        fb=f(b);
        fc=f(c);
        cout<<"a="<<a<<"     "<<"b="<<b<<"     "<<"c="<<c<<"      fc="<<fc<<endl;
        if (fc==0)        
        {
            cout<<"The root of the equation is "<<c;
            break;
        }
 
        if (fa*fc>0)    
        {
            a=c;    
        }
        else if (fa*fc<0)
        {    
            b=c;    
        }
}
    }            
    cout<<"The approx root of the equation is "<<c;    
    return 0;    
}
