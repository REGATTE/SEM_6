#include <bits/stdc++.h>
using namespace std;

void triangle(int a, int b, int c){
    if (a == b || b == c || a == c) 
        cout << "Isoceles Triangle"; 
    else
        cout << "Not Isoceles Triangle"; 
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    triangle(a,b,c);
    return 0;
}