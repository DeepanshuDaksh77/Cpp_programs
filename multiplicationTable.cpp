#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i =1;i<=10 ;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}