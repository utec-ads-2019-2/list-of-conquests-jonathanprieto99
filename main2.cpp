#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int numeromujeres;
string country;
string nombre;
string appellido;
vector <string>paises;
vector <string>vectorunic;

void contarpaises(int numeromujeres){
    for (int i = 0; i < numeromujeres; i++) {
        cin>>country>>nombre>>appellido;
        paises.push_back(country);
    }
    vectorunic=unique(paises.begin(),paises.end());
}




int main() {
    cin>>numeromujeres;
    contarpaises(numeromujeres);
}