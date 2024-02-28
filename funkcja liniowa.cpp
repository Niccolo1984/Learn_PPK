#include <iostream>
//Program do rozwiązywania równania liniowego ax + b = c, wartości a, b i c są wczytywane z klawiatury.
int main(){
    std::cout <<"Podaj użytkowniku zmienne " <<std::endl;
    int a,b,c;
    std::cin >>a >>b >>c;
    std::cout <<"\nx=" <<(c-b)/(a*1.0);
    return 0;
}