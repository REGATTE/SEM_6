#include <iostream>
using namespace std;
#include<cmath>
int main ()
{
    int n; 
    cin >> n;
    if(n!=1) {
        int count=1;
        bool prime=false;
        for (int k=1; k<=n; k++){
            
            for (int j=2;j<k;j++){
                
                if (k%j==0){
                    
                    prime=false;
                    break;
                }
                
                prime=true;
            
            }
            
            if(prime==true){
                count=count+1;
            }
            
        }
        
        
        cout << count;
    }   
    else {
        cout << 0;
    }
    return 0;
}
