#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x);    //declare the function for the given equation
double f(double x)    // give the equation
{
    double a=pow(x,2.0)-x-1.0;    //write the equation whose roots are to be determined
    return a;
}
double fprime(double x);
double fprime(double x)
{
    double b=3*pow(x,2.0)-1.0;        
    return b;
}
int main()
{
    double x,x1,e,fx,fx1;
    cout.precision(4);        //set the precision
    cout.setf(ios::fixed);    
    cout<<"Enter the initial guess\n";    
    cin>>x1;
    cout<<"Enter desired accuracy\n";    
    cin>>e;
    fx=f(x);                
    fx1=fprime(x);
    cout <<"x{i}"<<"    "<<"x{i+1}"<<"        "<<"|x{i+1}-x{i}|"<<endl;                
                     
    do           
    {
        x=x1;                
        fx=f(x);            
        fx1=fprime(x);            
        x1=x-(fx/fx1);            
 cout<<x<<"     "<<x1<<"           "<<abs(x1-x)<<endl;        
    }
while (fabs(x1-x)>=e);
{
    cout<<"The root of the equation is "<<x1<<endl;
    
}

    return 0;
}
