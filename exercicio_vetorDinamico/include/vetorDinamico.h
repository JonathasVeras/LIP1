#ifndef VETOR_DINAMICO_H
#define VETOR_DINAMICO_H

class VetorDinamico{
    int *vector;
    int tamanhoVector;
    int contador;
public:
    VetorDinamico(int tamanhoVetor);
    void adiciona(int dado);
    int qtdDados();
    int getDado(int i);
 // Métodos a serem criados
 // - construtor: deve alocar o vetor com um tamanho
 // inicial passado como parâmetro
 // - adiciona: coloca um dado no vetor. Se não houver
 // mais espaço, deve imprimir mensagem de 
 // alerta na tela e não inserir o novo 
 // dado
 // - qtdDados: deve informar o número de dados
 // inseridos no vetor
 // - getDado(i): deve informar o valor do dado 'i'
};

#endif