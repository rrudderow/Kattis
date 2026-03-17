#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

int main(){

    int row;
    cin >> row;
    char temp;
    string temp1;
    unordered_set<string> names;
    vector<string> output;

    for(int i=0;i<row;i++){
        cin >> temp >> temp1;
        if(temp == '+'){
            names.insert(temp1);
        }else if(temp == '-'){
            names.erase(temp1);
        }else if(temp == '?'){
            if (names.find(temp1) != names.end())
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