#ifndef IMOVEL_NOVO_H
#define IMOVEL_NOVO_H
#include "imovel.h"
#include <iostream>
using std::string;
using std::endl;

class ImovelNovo: public Imovel{
    protected:
        string prazo_garantia;
    public:
        ImovelNovo(string endereco, bool tipo, float preco_base, string prazo_garantia);
        ImovelNovo();

        friend std::ostream& operator<< (std::ostream &o, ImovelNovo const&i);
};


ImovelNovo::ImovelNovo(string endereco, bool tipo, float preco_base, string prazo_garantia){
    this->endereco = endereco;
    this->tipo = tipo;
    this->preco_base = preco_base;
    this->prazo_garantia = prazo_garantia;
}

std::ostream& operator<< (std::ostream &o, ImovelNovo const&i){
    o << "Endereco: " << i.endereco << endl << "Prazo da garantia: " << i.prazo_garantia << endl << "Preco base: " << i.preco_base << endl << "Tipo: " << i.tipo << endl;
    return o;
}
#endif