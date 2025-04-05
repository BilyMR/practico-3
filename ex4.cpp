int main()
{
    int a;
    std::cin>>a;
    
    if(a < 0) {
        std::cout<<"El numero es negativo. Intentelo de nuevo.";
    } else if(a >= 14) {
        std::cout<<"El numero es muy grande. Intentelo de nuevo.";
    } else {
        int factorial = 1;
        for(int i = 1; i <= a; i++) {
            factorial *= i;
        }
        std::cout<<factorial;
    }

    return 0;
}
