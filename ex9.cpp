#include <iostream>

int main()
{
    std::string a;
    std::cin>>a;
    
    int fcount = 0;
    int pos = 0;
    
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == 'f'){
            fcount++;
        }
        if(fcount == 2){
            pos = i - 1;
        }
    }
    
    if(fcount == 1){
        std::cout<<-1;
    } else if(fcount == 2) {
        std::cout<<pos;
    } else {
        std::cout<<-2;
    }
    
    return 0;
}
