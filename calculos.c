#include <math.h>
#include "calculos.h"

double pi = M_PI;

double areaTriangulo(double base, double altura){
	return (base * altura)/2;

}
double perimetroTriangulo(double lado1, double lado2, double lado3){
	return (lado1+lado2+lado3);
}

double areaParalelogramo(double base, double altura){
	return (base*altura);

}
double perimetroParalelogramo(double lado1, double lado2){
	return 2*(lado1+lado2);
}

double areaCuadrado(double lado){
	return lado*lado;
}
double perimetroCuadrado(double lado){
	return 4*lado;
}

double areaRectangulo(double base, double altura){
	return base*altura;
}
double perimetroRectangulo(double base, double altura){
	return (2*base+2*altura);
}

double areaRombo(double diagonalMayor, double diagonalMenor){
	return (diagonalMayor*diagonalMenor)/2;
}
double perimetroRombo(double lado){
	return (4*lado);
}

double areaTrapecio(double baseMayor, double baseMenor, double altura){
	return ((baseMayor*baseMenor)*altura)/2;
}
double perimetroTrapecio(double lado1, double lado2, double baseMayor, double baseMenor){
	return (lado1+lado2+baseMayor+baseMenor);
}

double areaCirculo(double radio){
	return pi*radio*radio;
}
double perimetroCirculo(double radio){
	return 2*pi*radio;
}

double areaPoligonoRegular(double lado, int numeroLados){
	double ap = lado/(2*tan(pi/numeroLados));
	return (lado*numeroLados*ap)/2;
}
double perimetroPoligonoRegular(double lado, int numeroLados){
	return lado*numeroLados;
}

// Cálculos de superficie y volumen para figuras 3D
double superficieCubo(double lado){
	return 12*lado;
}
double volumenCubo(double lado){
	return lado*lado*lado;
}

double superficieCuboide(double largo, double ancho, double alto){
	return 2*(largo*ancho)+2*(largo*alto)+2*(ancho*alto);

}
double volumenCuboide(double largo, double ancho, double alto){
	return largo*ancho*alto;
}

double superficieCilindro(double radio, double altura){
	return 2*pi*radio*(radio+altura);
}
double volumenCilindro(double radio, double altura){
	return pi*radio*radio*altura;
}

double superficieEsfera(double radio){
	return (4*pi*radio*radio);
}
double volumenEsfera(double radio){
	return (4*pi*radio*radio*radio)/3;
}

double superficieCono(double radio, double altura){
    double apotema = sqrt(radio*radio + altura*altura);
    return (pi*radio*radio) + (pi*radio*apotema);
}

double volumenCono(double radio, double altura){
	return (pi*radio*radio*altura)/3;
}
