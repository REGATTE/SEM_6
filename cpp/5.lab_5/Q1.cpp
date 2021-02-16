/*
J ashok kumar
E18CSE029
EB03
*/
#include<iostream>
#include<vector>

using namespace std;
void printArr(vector<vector<int>>, int, int);
void printTraversal(vector<vector<int>>, int, int);

int main()
{
    int m, n, choice;
    cout<<"Enter the dimensions (rows, columns): ";
    cin>>m>>n;
    vector<vector<int>> base_arr(m, vector<int>(n));

    cout<<"\nEnter the elements row wise:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>base_arr[i][j];
        }
    }
    cout<<"\n";
    printArr(base_arr, m, n);

    // Main Function
    cout<<"\nTraversal print: ";
    printTraversal(base_arr, m, n);

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

void printTraversal(vector<vector<int>> arr, int m, int n)
{
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    // High Complexity
    while (1)
    {
        if (left > right) {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        if (top > bottom) {
            break;
        }
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        if (left > right) {
            break;
        }
        for (int i = right; i >= left; i--) {
            cout << arr[bottom][i] << " ";
        }
        bottom--;

        if (top > bottom) {
            break;
        }
        for (int i = bottom; i >= top; i--) {
            cout << arr[i][left] << " ";
        }
        left++;
    }
}
