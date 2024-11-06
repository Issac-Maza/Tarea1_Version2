#ifndef CALCULOS_H
#define CALCULOS_H

// Cálculos de área y perímetro para figuras 2D
double areaTriangulo(double base, double altura);
double perimetroTriangulo(double lado1, double lado2, double lado3);

double areaParalelogramo(double base, double altura);
double perimetroParalelogramo(double lado1, double lado2);

double areaCuadrado(double lado);
double perimetroCuadrado(double lado);

double areaRectangulo(double base, double altura);
double perimetroRectangulo(double base, double altura);

double areaRombo(double diagonalMayor, double diagonalMenor);
double perimetroRombo(double lado);

double areaTrapecio(double baseMayor, double baseMenor, double altura);
double perimetroTrapecio(double lado1, double lado2, double baseMayor, double baseMenor);

double areaCirculo(double radio);
double perimetroCirculo(double radio);

double areaPoligonoRegular(double lado, int numeroLados);
double perimetroPoligonoRegular(double lado, int numeroLados);

// Cálculos de superficie y volumen para figuras 3D
double superficieCubo(double lado);
double volumenCubo(double lado);

double superficieCuboide(double largo, double ancho, double alto);
double volumenCuboide(double largo, double ancho, double alto);

double superficieCilindro(double radio, double altura);
double volumenCilindro(double radio, double altura);

double superficieEsfera(double radio);
double volumenEsfera(double radio);

double superficieCono(double radio, double altura);
double volumenCono(double radio, double altura);

#endif // CALCULOS_H
