#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

int main() {
    ifstream arquivo("entrada");
    if (!arquivo.is_open()) {
        cout << "Erro !\n";
        return 1;
    }
    else{
        cout<<"deu certo";
    }
    return 0;
}