#include <iostream>

int main()
{
    std::string a;
    std::getline(std::cin, a);
    
    std::string word = "";
    
    for(int i = 0; i < a.length(); i++) {
        
        if(a[i] != 32) {
            word += a[i];
        } else if (a[i] == 32){
            std::cout<<"["<<word<<"]"<<std::endl;
            word= "";
        }
        if(i == a.length()-1) {
            std::cout<<"["<<word<<"]"<<std::endl;
        }
    }
    
    return 0;
}
