/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include<string>

using namespace std;
string replace(string, char, char);

int main()
{
    string nam;
    char x, y;
    cout<<"Enter the string:\n";
    getline(cin, nam);

    cout<<"\nEnter the character to be replaced and the one that'll replace: ";
    cin>>x>>y;

    string result = replace(nam, x, y);

    cout<<"\nModified String: "<<result;

    return 0;
}

string replace(string a, char x, char y)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==x)
            a[i] = y;
    }

    return a;
}

