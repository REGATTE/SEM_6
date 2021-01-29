#include <iostream>
using namespace std;
int main()
{
    int r1;
    std::cout << "enter r1";
    std::cin >> r1;
    int r2;
    std::cout << "enter r2";
    std::cin >> r2;
    int r3;
    r3 = r1 + r2;
    float area1;
    float area2;
    float area3;
    area1 = 3.14 * r1 * r1;
    area2 = 3.14 * r2 * r2;
    area3 = 3.14 * r3 * r3;
    
    std::cout << " Area of circle with" << r1 << "is" << area1;
    std::cout << " Area of circle with" << r2 << "is" << area2;
    std::cout << " Area of circle with" << r3 << "i.e, (r1 + r2) is" << area3;
    return 0;
}