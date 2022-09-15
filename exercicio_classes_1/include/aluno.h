#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
using std::string;
class Aluno{
    string nome;
    string matricula;
    int idade;
    string genero;
    string cpf;
    public:
        void setNome(string nome_recebido);
        string getNome();

        void setMatricula(string matricula_recebida);
        string getMatricula();

        void setIdade(int idade_recebida);
        int getIdade();

        void setGenero(string genero_recebido);
        string getGenero();

        void setCpf(string cpf_recebido);
        string getCpf();

};
#endif