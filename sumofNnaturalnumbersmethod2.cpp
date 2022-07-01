#include <iostream>

int main(){
    int n;
    int sum;
    std::cout<<"Enter a positive integer: ";
    std::cin>>n;

    if (n< 0){
        std::cout<<"Enter a positive number";
    }
   else{
        sum = 0;
        while(n>0){
            sum = sum + n;
            n = n-1;
           
        }
         std::cout<<"The sum is:"<<" "<<sum;
        
   }
   return 0;
}