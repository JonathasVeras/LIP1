#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){

    vector<int> v; // Instancia o vetor
    vector<int>::iterator i; // Instancia o iterador do vetor

    // Laço de repetição para inserir 10 elementos no vector.
    for(int i=0; i!= 10; ++i){
        int x;
        cin >> x;
        v.push_back(x); // Insere um elemento no final do vector.
    }

    // Laço de repetição que 
    for(i = v.begin(); i!= v.end(); ++i){
        cout << "Elemento: " << *i  << endl;
    }

    return 0;
}