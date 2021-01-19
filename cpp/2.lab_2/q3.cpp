#include <iostream>
using namespace std;
#include<cmath>
int main ()
{
    try {
        int n;
        cin >> n;
        if(n>=0){
            int fact=1;
            
            for(int i=1; i<=n; i++){
                fact = fact*i;
            }
            cout<<"factorial of number " << n << " is " << fact;
        }
        
        else{
            throw 20;
        }
    }
    catch(...)
    {
        cout << "Error message";
    }
    return 0;
}
