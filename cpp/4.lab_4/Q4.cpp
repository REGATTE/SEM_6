/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>

using namespace std;
void printArr(int *, int);
void printArr1D(int *, int);
int *upperTraingle(int *, int);
int *lowerTraingle(int *, int);

int main()
{
    int n, choice;
    cout<<"Enter the dimensions: ";
    cin>>n;
    int base_arr[n][n];

    cout<<"\nEnter the elements row wise (ONLY UNIQUE ELEMENTS): ";
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cin>>base_arr[i][j];
            base_arr[j][i] = base_arr[i][j];
        }
    }

    printArr((int *)base_arr, n);

    cout<<"\nEnter your choice:\n1.Lower Triangle\n2.Upper Triangle\n";
    cin>>choice;
    int *final_arr = new int[(n*(n+1))/2];

    if(choice==2)
    {
        final_arr = upperTraingle((int *)base_arr, n);
    }

    else if(choice==1)
    {
        final_arr = lowerTraingle((int *)base_arr, n);
    }

    else
    {
        cout<<"Wrong Choice!!";
    }

    printArr1D(final_arr, (n*(n+1))/2);

    return 0;
}

void printArr(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<*((arr+i*n) + j)<<"\t";
        }
        cout<<endl;
    }
}

void printArr1D(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int *upperTraingle(int *arr, int n)
{
    int *c = new int[(n*(n+1))/2];
    int index = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            c[index] = *((arr+j*n) + i);
            index++;
        }
    }

    return c;
}

int *lowerTraingle(int *arr, int n)
{
    int *c = new int[(n*(n+1))/2];
    int index = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            c[index] = *((arr+i*n) + j);
            index++;
        }
    }

    return c;
}
