// ASHOK KUMAR
//E18CSE029

#include <bits/stdc++.h> 
#include <vector> 
using namespace std;

int combine(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 

int main(){
    int n;
    cout << "Enter number N1 here: ";
    cin >> n;

    vector<int> temp; 

    for (int i =0;i<=n;i++){
        for(int j =i;j<=n;j++){
            if((i*j) == n){
                temp.push_back(combine(i,j));
            }
        }
    }
    int min = *min_element(temp.begin(), temp.end());
    if(min == min%100){
        cout << "N2: " << min << endl;
    }
    else{
        cout << "Not Possible" << endl;
    }
    return 0;
}