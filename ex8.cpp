#include <iostream>

int main()
{
    std::string a;
    std::getline(std::cin, a);
    
    std::string reverse;
    
    std::string nospaces;
    
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != ' ') {
            nospaces += a[i];
        }
    }
    std::cout<<"Sin espacios: "<<nospaces<<std::endl;
    
    for(int i = nospaces.length() - 1; i >= 0; i--) {
        if(nospaces[i] != ' ') {
            reverse += nospaces[i];
        }
    }
    std::cout<<"Reverse: "<<reverse<<std::endl;
    
    if(reverse == nospaces) {
        std::cout<<"Yes";
    } else {
        std::cout<<"No";
    }
    
    return 0;
}
