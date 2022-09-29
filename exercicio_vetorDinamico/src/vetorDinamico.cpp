#include <iostream>
#include "vetorDinamico.h"

VetorDinamico::VetorDinamico(int tamanhoVetor){
    vector = new int[tamanhoVetor];
    tamanhoVector = tamanhoVetor;
    contador = 0;
}

void VetorDinamico::adiciona(int dado){
    if(contador >= tamanhoVector){
        std::cout << "Vetor cheio, impossivel adicionar mais elementos." << std::endl;
    }
    else{
        vector[contador] = dado;
        contador++;
    }

}

int VetorDinamico::qtdDados(){
    return contador;
}

int VetorDinamico::getDado(int i){
    return vector[i];
}