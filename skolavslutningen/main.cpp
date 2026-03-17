#include <iostream>
#include <string>
using namespace std;

int main(){

    int row,col,cl;
    int count=0;
    char matrix[row][col];

    cin >> row >> col >> cl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row-1;j++){
            if(matrix[j][i] == matrix[j])
        }
    }

    cout << count << endl;


    return 0;
}