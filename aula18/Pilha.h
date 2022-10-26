#ifndef Pilha_H
#define Pilha_H

template <class T>
class Pilha{
    private:
        T* elementos; //Ponteiro para os elementos
        int tamanho //Quantidade atual de elementos
        int capacidade //Quantidade máxima dos elementos
    public:
        Pilha(int n_capacidade);
        ~Pilha();
        bool empty();
        bool full();
        int size();
        int push(T novo);
        int pop();
        T& top();
};
//Construtor
template<class T>
Pilha<T>::Pilha(int n_capacidade){
    tamanho = 0;
    capacidade = n_capacidade;
    elementos = new T[n_capacidade];
}

template<class T>
Pilha<T>::~Pilha(){
    delete[] elementos;
}

template<class T>
bool Pilha<T>::empty(){
    /*if(tamanho==0) return true;
    else return false;*/
    return tamanho==0;
}

template<class T>
bool Pilha<T>::full(){
    /*if (tamanho==capacidade)
    {
        return true;
    }
    else return false;*/
    
    return tamanho==capacidade;
}

template<class T>
int Pilha<T>::size(){
    return tamanho;
}

template<class T>
int Pilha<T>::push(T novo){
    if(full()){
        return 0;
    }
    elementos[tamanho] = novo;
    tamanho++;
    return 1;
}

template<class T>
int Pilha<T>::pop(){
    if(empty()) return 0;
    tamanho--;
    return 1;
}

template<class T>
T& Pilha<T>::top(){
    if(empty()){
        std::cerr << "Erro: A pilha está vaazia" << std::endl;
        exit(EXIT_FAILURE);
    }
    return elementos[tamanho-1]
}
#endif