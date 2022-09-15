#include <iostream>
#include "../include/aluno.h"
#include "../include/turma.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
int main(void){
    int numero_alunos;
    cout << "Digite a quantidade de alunos: ";
    Turma turma;
    cin >> numero_alunos;
    Aluno aluno[numero_alunos];
    string nome;
    string matricula;
    int idade;
    string genero;
    string cpf;
    for (int i = 0; i < numero_alunos; i++)
    {
        cout << "Insira os dados do aluno " << i << ": " << endl;;
        cout << "Nome: ";
        cin >> nome;
        cout << "Matricula: ";
        cin >> matricula;
        cout << "Idade: ";
        cin >> idade;
        cout << "Genero: ";
        cin >> genero;
        cout << "cpf: ";
        cin >> cpf;
        aluno[i].setNome(nome);
        aluno[i].setMatricula(matricula);
        aluno[i].setIdade(idade);
        aluno[i].setGenero(genero);
        aluno[i].setCpf(cpf);
    }
    for (int i = 0; i < numero_alunos; i++)
    {
        string nome_aluno = aluno[i].getNome();
        string matricula_aluno = aluno[i].getMatricula();
        int idade_aluno = aluno[i].getIdade();
        string genero_aluno = aluno[i].getGenero();
        string cpf_aluno = aluno[i].getCpf();
        cout << "##### Aluno " << nome_aluno << " #####" << endl;
        cout <<"Matricula: " << matricula_aluno << endl;
        cout << "Idade: " << idade_aluno << endl;
        cout << "Genero: " << genero_aluno << endl;
        cout << "cpf: " << cpf_aluno << endl;
    }

    string nome_turma;
    string sim_ou_nao;
    cout << "Hora de criar uma turma, coloque a identificação do componente: ";
    cin >> nome_turma;
    turma.setIdentificacaoComponente(nome_turma);
    cout << "Deseja inserir os alunos que foram inseridos acima nessa nova turma?(sim/nao) ";
    cin >> sim_ou_nao;
    if (sim_ou_nao == "sim")
    {
        for (int i = 0; i < numero_alunos; i++)
        {
            turma.setAluno(aluno[i]);
        }
    }
    turma.printNomeAlunos();
    
    return 0;
}