#include <iostream>

int main(){
    int sum=0, val=50;
    while(val<=100){
        sum+=val;
        val++;
    }
    std::cout << "sum is " << sum << std::endl;

    sum=0;
    val=0;
    while(std::cin >> val){
        sum += val;
    }
    std::cout <<"sum is " << sum << std::endl;
    return 0;
}