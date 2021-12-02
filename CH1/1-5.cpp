#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item b1, b2;
    // std::cin>>b1 >> b2;
    // std::cout<< b1+b2 <<std::endl;

    if(std::cin>>b1){
        int cnt=1;
        while(std::cin>>b2){
            if(b1.isbn()==b2.isbn()){
                ++cnt;
            }
            else{
                std::cout<< "Book" << b1.isbn() << " has " << cnt 
                        << " sales record." << std::endl;
                b1=b2;
                cnt=1;
            }

        }
        std::cout<< "Book" << b1.isbn() << " has " << cnt 
                << " sales reco rd." << std::endl;

    }


    return 0;
}