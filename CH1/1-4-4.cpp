#include <iostream>

int main(){
    int curVal=0, val=0;
    
    if(std::cin>>curVal){
        int cnt=1;
        while(std::cin>>val){
            if(val==curVal){
                cnt++;
            }
            else{
                std::cout<< "number "<< curVal << " occured "
                        << cnt << " times."<< std::endl;
                cnt=1;
                curVal=val;
            }

        }
        std::cout<< "number "<< curVal << " occured "
                << cnt << " times."<< std::endl;

    }
    return 0;
}