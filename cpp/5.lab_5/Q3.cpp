/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include<string>

using namespace std;

int compare(int, int);
int compare(char, char);
int compare(string, string);

int main()
{
    int choice;
    cout<<"Enter your choice\n1. Integer\n2. Character\n3. String:\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            int a,b;
            cout<<"Enter the two numbers: ";
            cin>>a>>b;

            cout<<compare(a, b);
            break;
        }

        case 2:
        {
            char a,b;
            cout<<"Enter the two Characters: ";
            cin>>a>>b;

            cout<<compare(a, b);
            break;
        }

        case 3:
        {
            cin.ignore();

            string a,b;
            cout<<"Enter the two Strings: ";
            getline(cin, a);
            getline(cin, b);

            cout<<compare(a, b);
            break;
        }

        default: cout<<"Wrong Choice!!";
                 break;
    }

    return 0;
}

int compare(int a, int b)
{
    if(a>b)
        return 1;

    else if(a==b)
        return 0;

    else
        return -1;
}

int compare(char a, char b)
{
    if(int(a)>int(b))
        return 1;

    else if(int(a)==int(b))
        return 0;

    else
        return -1;
}

int compare(string a, string b)
{
    if(a.size()>b.size())
        return 1;

    else if(a.size()==b.size())
        return 0;

    else
        return -1;
}

