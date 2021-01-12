#include <bits/stdc++.h>
using namespace std;

void ave(int a, int b, int c){
    int s = (a + b +c)/3;
    cout << "Average = " << s << endl;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    ave(a,b,c);
    return 0;
}