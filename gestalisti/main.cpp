#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int row;
    cin >> row;
    char temp;
    string temp1;
    vector<string> names;
    vector<string> output;

    for(int i=0;i<row;i++){
        cin >> temp >> temp1;
        if(temp == '+'){
            names.push_back(temp1);
        }else if(temp == '-'){
            auto itr = find(names.begin(), names.end(), temp1);
            if (itr != names.end())
                names.erase(itr);
        }else if(temp == '?'){
            auto itr = find(names.begin(), names.end(), temp1);
            if (itr != names.end())
                output.push_back("Jebb");
            else
                output.push_back("Neibb");

        }else 
            return 1;
    }
    for(auto i : output)
        cout << i << endl;

    return 0;
}