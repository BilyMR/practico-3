#include <iostream>

int main()
{

    std::string a;
    std::getline(std::cin, a);
    
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == 32) {
            std::cout<<i<<std::endl;
        }
    }
    std::cout<<a.length();


    return 0;
}
