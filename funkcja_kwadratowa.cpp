#include    <iostream>
#include    <math.h>
//ax² + bx + c = 0
int main(){
    std::cout << "Podaj stala a, b i c: \n";
    int a,b,c;
        std::cin >>a >>b >>c;
        if (a==0){
            if(b==0){
                if(c==0)
                    std::cout <<"tozsame";
                else
                    std::cout <<"sprzeczne";
                return 0;
            }
            else
                std::cout <<"x=" <<(-c)/(b*1.0);
            return 0;
        }
        else{
        int D=(b*b)-(4*a*c);
        std::cout <<"Delta= " << D;
            if(D>=0){
                if(D>0){
                    std::cout <<"\nx1= " <<(-b+sqrt(D))/2*a;
                    std::cout <<"\nx2= " <<(-b-sqrt(D))/2*a;
                }
                else{
                    std::cout <<"\nx= " <<(-b)/2*a;
                }
            }
            else
                std::cout <<"\nnie ma rozwiązań";
        }
    return 0;
}