#include <iostream>
using namespace std;
#include<cmath>
int
main ()
{
    int ba;
    float da;
    float hra;
    cout << "Enter basic salary : ";
    cin >> ba;
    cout << "Enter da : ";
    cin >> da;
    cout << "Enter hra : ";
    cin>>hra;
    
    double gs;
    gs = ba + ((da/100)*ba) + ((hra/100)*ba);
    cout << "gross salary is : " << gs;
    
    return 0;
}
