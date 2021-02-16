/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include<string>

using namespace std;
void print1DArray(int *, int);
int *sortArr(int *, int);

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nOriginal Array: ";
    print1DArray((int *)arr, n);

    int *finalArr = sortArr((int *)arr, n);

    cout<<"\nSorted Array: ";
    print1DArray(finalArr, n);

    return 0;
}

void print1DArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int *sortArr(int *arr, int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}
