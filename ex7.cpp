#include <iostream>
int main()
{
    
    int n;
    int expo = 1;
    int sign = 1;
    do {
        std::cin>>n;
    } while (n < 0);    
    
    double frac = 0.0;
    
    for(int i = 1; i <= n; i++) {
        frac += (1.0 / i) * sign;
        sign *= -1;
    }
    std::cout<<frac<<std::endl;
   
    return 0;
}
