#include <iostream>
#include <cmath>

const float kPi = 3.1416;

int calcularSuma(int x, int y);

float calcularAreaCirculo(float r);

int calcularSuma(int x, int y){
    return x + y;
}


float calcularAreaCirculo(float r){
    float area = kPi * pow(r, 2);
    return round(area * 100) / 100;
}

int main(){

  int radio;

  std::cout << "Ingrese el radio del circulo: ";
  std::cin >> radio;

  float area = calcularAreaCirculo(radio);
  std::cout << "El area del circulo es: " << area << std::endl;



  return 0;
}

