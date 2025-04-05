#include <iostream>

int main()
{
    std::string a;
    std::cin>>a;
    
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '0' && a[i] != '1') {
            std::cout<<"Solo se aceptan 0's o 1's";
            return 0;
        }
    }
    for(int i = 0; i <= 10; i++) {
        if(a[i] == '0') {
            std::cout<<"No cake :("<<std::endl;
            return 0;
        } else if (a[i] == '1'){
            std::cout<<"Om-nom-nom :P"<<std::endl;
        }
    }

    return 0;
}
