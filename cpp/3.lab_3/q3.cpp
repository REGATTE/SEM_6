#include <iostream>;
using namespace std;
int main(){
    int x;
    std::cout << "enter the value of record";
    std::cin >> x;
    int count = 0;
    for (int i = 1; i = x+1; i++){
        if(i == 1){
            count = count + 1;
        }
        if(i == x){
            count = count + 1;
        }

    }
    return 0;
}