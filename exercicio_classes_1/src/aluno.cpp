#include "../include/aluno.h"

Aluno::Aluno(string _nome, string _matricula, int _idade, string _genero, string _cpf):
    nome(_nome), matricula(_matricula), idade(_idade), genero(_genero), cpf(_cpf) {}

Aluno::Aluno(){
    nome = "";
    matricula = "";
    idade = 0;
    genero = "";
    cpf = "";
};

void Aluno::setNome(string nome_recebido){
    nome = nome_recebido;
}
string Aluno::getNome(){
    return nome;
}

void Aluno::setMatricula(string matricula_recebida){
    matricula = matricula_recebida;
}
string Aluno::getMatricula(){
    return matricula;
}

void Aluno::setIdade(int idade_recebida){
    idade = idade_recebida;
}
int Aluno::getIdade(){
    return idade;
}

void Aluno::setGenero(string genero_recebido){
    genero = genero_recebido;
}
string Aluno::getGenero(){
        return genero;
}
void Aluno::setCpf(string cpf_recebido){
    cpf = cpf_recebido;
}
string Aluno::getCpf(){
        return cpf;
}