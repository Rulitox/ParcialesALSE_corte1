# Calculadora de Centroide

## Descripción
Este programa calcula el centroide (promedio de coordenadas) de un conjunto de puntos en un plano cartesiano. El centroide es el punto promedio de todos los puntos ingresados.

## Funcionalidades
- Solicita al usuario la cantidad de puntos a ingresar
- Permite ingresar las coordenadas (x, y) de cada punto
- Calcula el centroide utilizando la fórmula: 
  - cx = (x₁ + x₂ + ... + xₙ) / n
  - cy = (y₁ + y₂ + ... + yₙ) / n
- Muestra todos los puntos ingresados y el centroide calculado

## Estructura del código
- `struct Point`: Define un punto con coordenadas x e y
- `calcularCentroide()`: Función que calcula el centroide
- `main()`: Función principal que maneja la interacción con el usuario

## Cómo compilar y ejecutar
```bash
g++ centroide.cpp -o centroide
./centroide
