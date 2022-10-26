#ifndef CASA_H
#define CASA_H
#include "imovelNovo.h"
#include "imovelVelho.h"
#include <iostream>
using std::string;

class Casa: public ImovelNovo, ImovelVelho{
    private:
        string tipo_telha;
    public:
        Casa(string endereco, bool tipo, float preco_base, string tipo_variavel);

        friend std::ostream& operator<< (std::ostream &o, Casa const&i);
};
Casa::Casa(string endereco, bool tipo, float preco_base, string tipo_variavel){
    if(tipo == false){
        this->registro_ultimo_dono = tipo_variavel;
        this->endereco = endereco;
        
    }
    else{
        this->prazo_garantia = tipo_variavel;
    }
}
std::ostream& operator<< (std::ostream &o, Casa const&i){
    if(i.tipo==false){
        o << "Endereco: " << i.endereco << endl << "Prazo da garantia: " << i.prazo_garantia << endl << "Preco base: " << i.preco_base << endl << "Tipo: " << i.tipo << endl;
    }

    return o;
}
#endif