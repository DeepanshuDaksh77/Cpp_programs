#include <iostream>

int main(){
    int num1;
    int num2;
    char press;

    std::cout<<"Enter a number: ";
    std::cin>>num1;
    std::cout<<"Enter another number: ";
    std::cin>>num2;
    std::cout<<"Press a for addition\n";
    std::cout<<"Press b for subtraction\n";
    std::cout<<"Press c for multiplication\n";
    std::cout<<"Press d for divison\n";

    std::cin>>press;
    

    if(press == 'a'){
        std::cout<<"The addition for the given numbers is: "<<num1 + num2;
    }
    else if(press == 'b'){
        std::cout<<"The subtraction for the given numbers is: "<<num1 - num2;
    }
    else if(press == 'c'){
        std::cout<<"The multiplication for the given numbers is: "<<num1 * num2;
    }
    else if(press == 'd'){
        std::cout<<"The division for the given numbers is: "<<num1 / num2;
    }
    
    return 0;
}