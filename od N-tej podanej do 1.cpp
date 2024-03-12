#include    <iostream>

int main(){
    std::cout <<"Wpisz X od którego mam liczyć do 1: ";
    int a;
    std::cin >>a;
    while(a>0){
        std::cout <<a;
        a--;
    }
    return 0;
}