#include <iostream>

int main(){
    int j;
    int sqr;
    std::cout<<"Enter a number:";
    std::cin>>j;
    for(int i = 0; i <=j; i++){
        if(i==j){
            sqr = i * j;
        std::cout<<"The square of "<<i<<" is: "<<sqr;
        }
    }
    return 0;
}