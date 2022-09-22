#include <iostream>
#include "calcularQuadrado.h"
/*
Escreva um programa em C++ que solicite ao usuário digitar um valor real e em seguida calcula e retorna o
quadrado do valor digitado. A seguir, o programa pede que você digite um valor inteiro, e ele calcula e retorna o
quadrado do valor inteiro digitado. Para elaborar esse programa, você deve sobrecarregar a função
calculaQuadrado(n) que, dependendo do valor de n, pode calcular o quadrado de um número inteiro ou
real. Note que você deve criar essas funções e chamá-las a partir da função main(), passando diferentes
argumentos digitados pelo usuário.
*/
int main(){
    float x;
    int y;
    std::cout << "Digite um valor real: " << std::endl;
    std::cin >> x;
    std::cout << "Resultado de " << x << " ao quadrado: " << calculaQuadrado(x) << std::endl; 

    std::cout << "Digite um valor inteiro: " << std::endl;
    std::cin >> y;
    std::cout << "Resultado de " << y << " ao quadrado: " << calculaQuadrado(y) << std::endl;
    return 0;

}