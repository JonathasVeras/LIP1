#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <algorithm>

using std::find_if;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
bool is_prime(int number);
int main(int argc,char *argv[]){

    vector<int> v;

    // Inserção do argv no vector
    for (int i = 1; i <= atoi(argv[1]); i++){
        v.push_back(i);
    }
    // iterator que usa o find_if para descobrir se há algum primo.
    vector<int>::iterator it = find_if(v.begin(), v.end(), is_prime);

    cout << "Numeros primos" << "[1-" << argv[1] <<"]: ";
    while( it!=v.end() ){
        
        cout << *it << " " ;
        it=find_if(++it, v.end(), is_prime);
    }
    cout << endl;
    
    return 0;
}
bool is_prime(int number){
    for (int i = 2; i <= number / 2; i++){
        if (number%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}