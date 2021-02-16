/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
# define PI 3.141592653589793238
using namespace std;
int area(int, int);
double area(int, double);
double area(double);

int main()
{
    int choice;
    cout<<"Enter your choice:\n1.Triangle\n2.Rectangle\n3.Circle\n";
    cin>>choice;

    if(choice==1)
    {
        int base;
        double height;
        cout<<"Enter the base and height: ";
        cin>>base>>height;
        cout<<"Area of Triangle: "<<area(base, height);
    }

    else if(choice==2)
    {
        int l, b;
        cout<<"Enter the length and breadth: ";
        cin>>l>>b;
        cout<<"\nArea of Rectangle: "<<area(l, b);
    }

    else
    {
        int r;
        cout<<"Enter the radius: ";
        cin>>r;
        cout<<"\nArea of Circle: "<<area(r);
    }

    return 0;
}

int area(int l, int b)
{
    return l*b;
}

double area(int base, double height)
{
    return (0.5 * base * height);
}

double area(double r)
{
    return (4*PI*r*r);
}
