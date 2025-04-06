#include <iostream>

int main()
{
    int n, k;
    
    do{
        std::cin>>n>>k;
    } while(n <= 0 || n > 7 && k <= 0 || k > 99);
    
    if(n == 1) {
        for(int i = 1; i <= k; i++){
            if(i % 7 == 0){
                std::cout<<i<<"\n";
            } else {
                std::cout<<i<<"\t";
            }
        }
    } else {
        int newline = 0;
        for(int i = 1; i < n; i++) {
            std::cout<<"\t";
            newline++;
        }
        for(int i = 1; i <= k; i++) {
            std::cout<<i<<"\t";
            newline++;
            if(newline == 7 || newline % 7 == 0){
                std::cout<<"\n";
            }
        }
    }
    
    

    return 0;
}
