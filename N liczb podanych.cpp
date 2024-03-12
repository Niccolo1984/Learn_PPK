#include <iostream>

int main(){
    std::cout <<"Wpisz liczbę N liczb naturalnych od 1: ";
    int a;
    std::cin >>a;
    // pętla for zaczyna od podanej wartości "i"    następnie aż "i" będzie równe "a", program będzie dodawał +1 (i++), aż to osiągnie
    // jeśli dam w funkcji for "i+=2" to będzie mi dodawać +2 po każdej pętli
    for(int i=1; i<=a; i++){
       std::cout <<i;
    }
    return 0;
}