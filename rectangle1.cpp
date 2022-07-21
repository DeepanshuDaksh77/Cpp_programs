#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int rows, columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout<<"#";
        }
        cout<<"\n";
        
    }

    return 0;
}