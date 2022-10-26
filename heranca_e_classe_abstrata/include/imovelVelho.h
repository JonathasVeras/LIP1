#ifndef IMOVEL_VELHO_H
#define IMOVEL_VELHO_H
#include "imovel.h"
#include <iostream>
using std::string;
using std::endl;

class ImovelVelho: public Imovel{
    protected:
        string registro_ultimo_dono;
    public:
        ImovelVelho(string endereco, bool tipo, float preco_base, string registro_ultimo_dono);

        friend std::ostream& operator<< (std::ostream &o, ImovelVelho const&i);
};


ImovelVelho::ImovelVelho(string endereco, bool tipo, float preco_base, string registro_ultimo_dono){
    this->endereco = endereco;
    this->tipo = tipo;
    this->preco_base = preco_base;
    this->registro_ultimo_dono = registro_ultimo_dono;
}

std::ostream& operator<< (std::ostream &o, ImovelVelho const&i){
    o << "Endereco: " << i.endereco << endl << "Registro do último dono: " << i.registro_ultimo_dono << endl << "Preco base: " << i.preco_base << endl << "Tipo: " << i.tipo << endl;
    return o;
}
#endif