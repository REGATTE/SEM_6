// ASHOK KUMAR
//E18CSE029

#include<bits/stdc++.h>
using namespace std;

void split(vector<string> v) { 
    cout << "Spliting[";
    for(int i = 0; i < v.size(); i++){
        cout << "'" << v[i] << "',";
    }
    cout << "]" << endl;
    
    size_t half_size = v.size() / 2;
    vector<string> split_lo(v.begin(), v.begin() + half_size);
    vector<string> split_hi(v.begin() + half_size, v.end());

    cout << "Left list[";
    for(int i = 0; i < split_lo.size(); i++){
        cout << "'" << split_lo[i] << "',";
    }

    cout << "]  Right list[";
    for(int i = 0; i < split_hi.size(); i++){
        cout << "'" << split_hi[i] << "',";
    }
    cout << "]" << endl;

    if(split_lo.size() > 1){
        split(split_lo);
    }
    else if(split_lo.size() == 1){
        cout << "Spliting[" << split_lo[0]<< "]" << endl;
    }
    if(split_hi.size() > 1){
        split(split_hi);
    }
    else if(split_lo.size() == 1){
        cout << "Spliting[" << split_hi[0]<< "]" << endl;
    }
} 

int main()
{
    vector<string> str;
    string name;
    while(name != "end"){
        cin >> name;
        str.push_back(name);
    }
    str.pop_back();

    split(str);
	return 0;
}
