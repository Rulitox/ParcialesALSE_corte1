
#include <stdio.h>
#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

Point calcularCentroide(Point puntos[], int n) {
    Point centroide;
    double sumaX = 0.0;
    double sumaY = 0.0;
    
    for (int i = 0; i < n; i++) {
        sumaX += puntos[i].x;
        sumaY += puntos[i].y;
    }
    
    centroide.x = sumaX / n;
    centroide.y = sumaY / n;
    
    return centroide;
}

int main() {
    int n;
    
    cout << "=== CALCULADORA DE CENTROIDE ===" << endl;
    cout << "Ingrese el numero de puntos: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Error: Debe ingresar al menos 1 punto." << endl;
        return 1;
    }
    
 
    Point* puntos = new Point[n];
    
 
    cout << "\nIngrese las coordenadas de los " << n << " puntos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Punto " << i + 1 << " (x y): ";
        cin >> puntos[i].x >> puntos[i].y;
    }
    
    
    Point centroide = calcularCentroide(puntos, n);
    
  
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Puntos ingresados:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": (" << puntos[i].x << ", " << puntos[i].y << ")" << endl;
    }
    
    cout << "\nCentroide calculado:" << endl;
    cout << "C: (" << centroide.x << ", " << centroide.y << ")" << endl;
    
  
    delete[] puntos;
    
    return 0;
}