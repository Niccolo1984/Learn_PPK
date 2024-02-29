#include <iostream>

int main(){
    std::cout <<"Podaj stale do rownania nr 1: ";
    int a,b,c,d,e,f;
    std::cin >>a >>b >>c;
    std::cout <<"\nPodaj stale do rownania nr 2: ";
    std::cin >>d >>e >>f;
    int WG=a*e-b*d;
    std::cout <<"\nWyznacznik Główny: " <<WG;
    int WX=c*e-f*b;
    std::cout <<"\nWyznacznik X: " <<WX;
    int WY=a*f-c*d;
    std::cout <<"\nWyznacznik Y: " <<WY;
    
    if (WG==0){
        if (WX==0 and WY==0)
            std::cout << "Uklad nieoznaczony ";
        else 
            std::cout << "Uklad sprzeczny";
        return 0;
    };

    int x=WX/(WG*1.0);
    std::cout <<"\nPierwsza szukana x: " <<x;
    int y=WY/(WG*1.0);
    std::cout <<"\nDruga szukana y: " <<y;
    
    return 0;
   

}