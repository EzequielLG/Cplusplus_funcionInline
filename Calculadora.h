// Autor: LozanoSoft

#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

#include <string>

using namespace std;

class Calculadora{

  private:
    string estado;
    int operacion;

  public:

    explicit Calculadora(); // Constructor

    // Métodos

    int getCalculo(){ // Forma implícita
      return operacion;
    };

    void suma(int, int);
    void setEstado(string);

};

#endif
