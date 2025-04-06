#include <iostream>

int main()
{
    int a;
    std::cin>>a;
    
    int result = 0;
    
    if(a <= 0) {
        std::cout<<"Solo numeros positivos mayores a 1";
    } else {
        while(a > 0) {
            result += a % 10;
            a /= 10;
        }
        std::cout<<result;
    }

    return 0;
}

/*int main()
{
    std::string a;
    std::cin>>a;
    
    int result = 0;
    
    for(int i = 0; i < a.length(); i++) {
        result += a[i] - 48;
    }
    
    std::cout<<result;

    return 0;
}*/
