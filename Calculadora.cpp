// Autor: LozanoSoft

#include "Calculadora.h"

Calculadora::Calculadora(){
  estado = "Apagada";
  operacion = 0;
}

void Calculadora::setEstado(string nuevoEstado){
  estado = nuevoEstado;
}

inline void Calculadora::suma(int num_1, int num_2){
  operacion = num_1 + num_2;
}
