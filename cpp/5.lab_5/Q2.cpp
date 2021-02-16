/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include<vector>

using namespace std;

void printArr(vector<vector<int>>, int, int);
vector<vector<int>> encrypt(vector<vector<int>>, int, int);
vector<vector<int>> decrypt(vector<vector<int>>, int, int);

int main()
{
    int m, n, choice;
    cout<<"Enter the dimensions (rows, columns): ";
    cin>>m>>n;

    vector<vector<int>> base_arr(m, vector<int>(n));

    cout<<"\nEnter the elements row wise: ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>base_arr[i][j];
        }
    }

    printArr(base_arr, m, n);
    cout<<"\n";

    vector<vector<int>> enc_arr = encrypt(base_arr, m, n);

    cout<<"Encrypted Matrix:\n";
    printArr(enc_arr, m, n);

    vector<vector<int>> dec_arr = decrypt(enc_arr, m, n);

    cout<<"\nDecrypted Matrix:\n";
    printArr(dec_arr, m, n);

    return 0;
}

void printArr(vector<vector<int>> arr, int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

vector<vector<int>> encrypt(vector<vector<int>> arr, int m, int n)
{
    vector<vector<int>> c(m, vector<int>(n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( ((m-i)==1 || (m-i)==m) || ((n-j)==1 || (n-j)==n) )
            {
                c[i][j] = arr[i][j] + i + 1;
            }

            else
            {
                c[i][j] = arr[i][j] - j;
            }
        }
    }

    return c;
}

vector<vector<int>> decrypt(vector<vector<int>> arr, int m, int n)
{
    vector<vector<int>> c(m, vector<int>(n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( ((m-i)==1 || (m-i)==m) || ((n-j)==1 || (n-j)==n) )
            {
                c[i][j] = arr[i][j] - (i + 1);
            }

            else
            {
                c[i][j] = arr[i][j] + j;
            }
        }
    }

    return c;
}
