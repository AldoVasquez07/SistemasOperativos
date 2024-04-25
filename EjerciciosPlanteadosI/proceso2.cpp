#include <iostream>
using namespace std;
class Laboratorio {
  int num;
};
class Practica {
  int a;
  Laboratorio lab;

  public:
  operator Laboratorio () { return lab; }
  operator int () { return a; }
};
void funcion (int a) {
  cout << "funcion (int) ejecutada"
}
void funcion (Laboratorio la) {
  cout << "funcion (Laboratorio) ejecutada"
}
int main() {
  Practica p;
  funcion(p);
  return 0;
}
