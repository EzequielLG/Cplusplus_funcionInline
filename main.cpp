// Autor: LozanoSoft

#include <iostream>
#include "Calculadora.cpp"

inline int suma(int n1, int n2){ return n1 + n2; }

int main(){

  Calculadora miCalculadora;

  int num_1 = 12;
  int num_2 = 50;

  miCalculadora.setEstado("Prendida");
  miCalculadora.suma(num_1, num_2);
  cout << miCalculadora.getCalculo() << endl;

  cout << "El resultado de la suma es: " << suma(num_1, num_2) << endl;
  return 0;

}
