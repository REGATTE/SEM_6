/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>

using namespace std;
int* pairWiseSum(int *, int *, int);
void printArr(int *, int);
int bitWiseXOR(int *, int);

int main()
{
    int n;
    cout<<"Enter the number of elements that'll be present: ";
    cin>>n;
    int arr1[n], arr2[n];

    for(int i=0; i<n; i++)
    {
        arr1[i] = i+1;
        arr2[i] = arr1[i]+1;
    }
    printArr(arr1, n);
    printArr(arr2, n);
    int *arr3 = pairWiseSum(arr1, arr2, n);

    cout<<"Pairwise Sum: {";
    for(int i=0; i<n*n; i++)
    {
        cout<<arr3[i]<<", ";
    }
    cout<<"}\n";
    int maxPair = bitWiseXOR(arr3, n);
    cout<<"Max Pair: "<<maxPair;

    delete[] arr3;

    return 0;
}

int* pairWiseSum(int *arr1, int *arr2, int n)
{
    int* c = new int[n*n];
    int index=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[index] = arr1[i] + arr2[j];
            index++;
        }
    }

    return c;
}

void printArr(int *arr, int n)
{
    cout<<"{";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n";
}

int bitWiseXOR(int *arr, int n)
{
    int max_=0, pair_index = -1;

    for(int i=0; i<n*n; i++)
    {
        for(int j=0; j<n*n; j++)
        {
            if(max_ < (arr[i]|arr[j]))
            {
                max_ = (arr[i]|arr[j]);
                pair_index++;
            }
        }
    }

    return pair_index;
}
