/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include <bits/stdc++.h>
#include<utility>

using namespace std;

int checkPrime(int n, int dividend, int counter)
{
    while(n%dividend==0 && n!=0)
    {
        counter++;
        n/=dividend;
    }

    return counter;
}

int main()
{
    int n, counter;
    cout<<"Enter the number: ";
    cin>>n;

    pair<int, int> arr_factors[n];

    int num = n;

    for(int i=2; i<n; i++)
    {
        if(num==1)
        {
            break;
        }
        else
        {
            counter = checkPrime(num, i, 0);

            arr_factors[i].first = i;
            arr_factors[i].second = counter;
            num/=pow(i, counter);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr_factors[i].second)
            cout<<arr_factors[i].first<<" "<<arr_factors[i].second<<"\n";
    }

    return 0;
}

