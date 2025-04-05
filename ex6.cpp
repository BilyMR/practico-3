#include <iostream>

int main()
{
    std::string a;
    std::cin>>a;
    
    int result = 0;
    
    for(int i = 0; i < a.length(); i++) {
        result += a[i] - 48;
    }
    
    std::cout<<result;

    return 0;
}
