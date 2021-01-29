#include <iostream>
using namespace std;
int main(){
    int count1 = 0;
    int count2 = 0;
    int A[7][2] = {{1, 4}, {3, 2}, {5, 6}, {7, 8}, {9, 10}, {13, 12}, {11, 14}};
    for (int i = 0; i < 7; i++){
        if((A[i][0] < A[i+1][0]) && (A[i][1] > A[i+1][1])){
            std::cout <<"{("<<A[i][0] <<","<< A[i][1] <<"),("<< A[i+1][0] <<","<< A[i+1][1] <<")}"<< endl;
            count1 = count1 + 1;
        }
    }
    std::cout << count1 << endl;
    for (int i = 0; i<7;i++){
        if((A[i][0] > A[i+1][0]) && (A[i][1] < A[i+1][1])){
            std::cout <<"{("<<A[i][0] <<","<< A[i][1] <<"),("<< A[i+1][0] <<","<< A[i+1][1] <<")}"<< endl;
            count2 = count2 + 1;
        }
    }
    std::cout << count2;
    return 0;
}