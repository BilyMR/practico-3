#include <iostream>

int main()
{
    std::string a;
    std::getline(std::cin, a);
    
    std::string word = "[";
    
    for(int i = 0; i < a.length(); i++) {
        
        if(a[i] != 32) {
            word += a[i];
        } else if (a[i] == 32){
            word += "]\n[";
        }
    }
    
    word += "]";
    
    std::cout<<word;

    return 0;
}
