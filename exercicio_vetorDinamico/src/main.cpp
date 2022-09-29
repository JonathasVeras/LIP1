#include <iostream>
#include "vetorDinamico.h"
int main()
{
int tamanhoVetor, dado;
std::cin >> tamanhoVetor;
 VetorDinamico V1(tamanhoVetor); 
 do{
 std::cin >> dado;
 if (dado>0)
 V1.adiciona(dado);
 else break;
 } while (1);
 for(int i=0; i< V1.qtdDados(); i++)
 {
    std::cout << "dado: " << std::endl;
 std::cout << V1.getDado(i) << std::endl;
 }
return(0);
}