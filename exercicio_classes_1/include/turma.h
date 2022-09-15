#ifndef TURMA_H
#define TURMA_H
#include <iostream>
#include <cstring>
#include <vector>
#include "aluno.h"

using std::string;
using std::vector;

class Turma{
    string identificacao_componente;
    int quant_alunos_matriculados=0;
    vector <Aluno> alunos;
    public:
        void setAluno(Aluno aluno);
        void deleteAluno(string nome_aluno);
        void printNomeAlunos();

        void setIdentificacaoComponente(string nome_turma);
        string getIdentificacaoComponente();
};
#endif  