#ifndef IMOVEL_H
#define IMOVEL_H
#include <iostream>
using std::string;
using std::cout;
using std::endl;
/*
Você foi contratado para desenvolver um sistema de controle imobiliário com os seguintes 
requisitos:
- Um imóvel possui como atributos seu endereço, tipo (casa ou apartamento) e preço base. 
- Cada imóvel é necessariamente classificado como novo ou velho. 
- Apenas imóveis novos possuem prazo de garantia. Apenas imóveis velhos possuem o registro 
do último dono.
- Apenas casas possuem tipo de telha (cerâmica ou policarbonato). Apenas apartamentos 
possuem o número do andar.  
- Seu sistema deve ser capaz de imprimir o preço do imóvel. Imóveis velhos devem mostrar o 
preço com 10% de desconto em seu preço base.
(Você é livre para incluir qualquer outra funcionalidade ao seu programa)
*/
class Imovel{
protected:
    string endereco;
    bool tipo;
    float preco_base;
public:
    void printPreco();
};


void Imovel::printPreco(){
    cout << preco_base << endl;
}
#endif