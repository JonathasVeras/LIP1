#include <iostream>
#include <list>
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main(){
    list<int> v;
    list<int>::iterator i;

    for(int i=0; i!= 10; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(i = v.begin(); i!= v.end(); ++i){
        cout << "Elemento: " << *i  << endl;
    }

    return 0;
}