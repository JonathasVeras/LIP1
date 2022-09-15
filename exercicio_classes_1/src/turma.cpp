#include "../include/turma.h"
#include <vector>
void Turma::setAluno(Aluno aluno){
    alunos.push_back(aluno);
    quant_alunos_matriculados++;
}

void Turma::deleteAluno(string nome_aluno){
    vector<Aluno>::iterator iter = alunos.begin();
    for (iter = alunos.begin(); iter != alunos.end(); ++iter){
        if (iter->getNome() == nome_aluno){
            alunos.erase(iter);
            quant_alunos_matriculados--;
            break;
        }
    }
}

void Turma::printNomeAlunos(){
    vector<Aluno>::iterator iter = alunos.begin();
    for (iter = alunos.begin(); iter != alunos.end(); ++iter){
        std::cout << iter->getNome() << std::endl;
    }
}

void Turma::setIdentificacaoComponente(string nome_turma){
    identificacao_componente = nome_turma;
}

string Turma::getIdentificacaoComponente(){
    return identificacao_componente;
}