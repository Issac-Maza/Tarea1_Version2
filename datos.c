#include <stdio.h>
#include "datos.h"
#include "calculos.h"

void mostrarMenu() {
    printf("\n MENU:\n");
    printf("-------AREA Y PERIMETRO-------\n");
    printf("1. Triangulo\n");
    printf("2. Paralelogramo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("5. Rombo\n");
    printf("6. Trapecio\n");
    printf("7. Circulo\n");
    printf("8. Poligono regular\n");
    printf("\n");
    printf("-------SUPERFICIE Y VOLUMEN---------\n");
    printf("9. Cubo\n");
    printf("10. Cuboide\n");
    printf("11. Cilindro recto\n");
    printf("12. Esfera\n");
    printf("13. Cono circular recto\n");
    printf("\n\n ELIJA UNA OPCION: ");
}

void solicitarDatosFigura(int figura) {
	double base, altura, lado, lado1, diagonalM, diagonalm, baseM, basem;
	double radio, longitud, ancho, alto;
	double area, perimetro, superficie, volumen;
	int numeroLados;
	
	switch (figura) {
		case 1: // Triángulo
			printf("Ingrese la base del triangulo: ");
			scanf("%lf", &base);
			printf("Ingrese la altura del triangulo: ");
			scanf("%lf", &altura);
			printf("Ingrese el primer lado del triangulo: ");
			scanf("%lf", &lado);
			printf("Ingrese el segundo lado del triangulo: ");
			scanf("%lf", &lado1);

			area = areaTriangulo(base, altura);
			perimetro = perimetroTriangulo(base, lado, lado1);

			mostrarResultado(area, perimetro);
			break;

		case 2: // Paralelogramo
			printf("Ingrese la base del paralelogramo: ");
			scanf("%lf", &base);
			printf("Ingrese la altura del paralelogramo: ");
			scanf("%lf", &altura);
			printf("Ingrese el lado del paralelogramo: ");
			scanf("%lf", &lado);

			area = areaParalelogramo(base, altura);
			perimetro = perimetroParalelogramo(base, lado);

			mostrarResultado(area, perimetro);
			break;

		case 3: // Cuadrado
			printf("Ingrese el lado del cuadrado: ");
			scanf("%lf", &lado);

			area = areaCuadrado(lado);
			perimetro = perimetroCuadrado(lado);

			mostrarResultado(area, perimetro);
			break;

		case 4: // Rectángulo
			printf("Ingrese la longitud del rectángulo: ");
			scanf("%lf", &longitud);
			printf("Ingrese el ancho del rectángulo: ");
			scanf("%lf", &altura);

			area = areaRectangulo(longitud, altura);
			perimetro = perimetroRectangulo(longitud, altura);

			mostrarResultado(area, perimetro);
			break;

		case 5: // Rombo
			printf("Ingrese la diagonal mayor del rombo: ");
			scanf("%lf", &diagonalM);
			printf("Ingrese la diagonal menor del rombo: ");
			scanf("%lf", &diagonalm);
			printf("Ingrese el lado del rombo: ");
			scanf("%lf", &lado);

			area = areaRombo(diagonalM, diagonalm);
			perimetro = perimetroRombo(lado);

			mostrarResultado(area, perimetro);
			break;

		case 6: // Trapecio
			printf("Ingrese la base mayor del trapecio: ");
			scanf("%lf", &baseM);
			printf("Ingrese la base menor del trapecio: ");
			scanf("%lf", &basem);
			printf("Ingrese la altura del trapecio: ");
			scanf("%lf", &altura);
			printf("Ingrese un lado no paralelo del trapecio: ");
			scanf("%lf", &lado);
			printf("Ingrese el otro lado no paralelo: ");
			scanf("%lf", &lado1);

			area = areaTrapecio(baseM, basem, altura);
			perimetro = perimetroTrapecio(lado, lado1, baseM, basem);

			mostrarResultado(area, perimetro);
			break;

		case 7: // Círculo
			printf("Ingrese el radio del círculo: ");
			scanf("%lf", &radio);

			area = areaCirculo(radio);
			perimetro = perimetroCirculo(radio);

			mostrarResultado(area, perimetro);
			break;

		case 8: // Polígono regular
			printf("Ingrese el número de lados del polígono: ");
			scanf("%d", &numeroLados);
			printf("Ingrese la longitud de un lado del polígono: ");
			scanf("%lf", &lado);

			area = areaPoligonoRegular(lado, numeroLados);
			perimetro = perimetroPoligonoRegular(lado, numeroLados);

			mostrarResultado(area, perimetro);
			break;

		case 9: // Cubo
			printf("Ingrese la longitud del lado del cubo: ");
			scanf("%lf", &longitud);

			superficie = superficieCubo(longitud);
			volumen = volumenCubo(longitud);

			mostrarResultado3D(superficie, volumen);
			break;

		case 10: // Cuboide
			printf("Ingrese la longitud del cuboide: ");
			scanf("%lf", &longitud);
			printf("Ingrese el ancho del cuboide: ");
			scanf("%lf", &ancho);
			printf("Ingrese la altura del cuboide: ");
			scanf("%lf", &alto);

			superficie = superficieCuboide(longitud, ancho, alto);
			volumen = volumenCuboide(longitud, ancho, alto);

			mostrarResultado3D(superficie, volumen);
			break;

		case 11: // Cilindro recto
			printf("Ingrese el radio del cilindro: ");
			scanf("%lf", &radio);
			printf("Ingrese la altura del cilindro: ");
			scanf("%lf", &altura);

			superficie = superficieCilindro(radio, altura);
			volumen = volumenCilindro(radio, altura);

			mostrarResultado3D(superficie, volumen);
			break;

		case 12: // Esfera
			printf("Ingrese el radio de la esfera: ");
			scanf("%lf", &radio);

			superficie = superficieEsfera(radio);
			volumen = volumenEsfera(radio);

			mostrarResultado3D(superficie, volumen);
			break;

		case 13: // Cono circular recto
			printf("Ingrese el radio del cono: ");
			scanf("%lf", &radio);
			printf("Ingrese la altura del cono: ");
			scanf("%lf", &altura);

			superficie = superficieCono(radio, altura);
			volumen = volumenCono(radio, altura);

			mostrarResultado3D(superficie, volumen);
			break;

		default:
			printf("Figura no válida.\n");
			break;
	}
}

void mostrarResultado(double area, double perimetro) {
	printf("El área es: %.2f\n", area);
	printf("El perímetro es: %.2f\n", perimetro);
}

void mostrarResultado3D(double superficie, double volumen) {
	printf("Superficie: %.2lf\n", superficie);
	printf("Volumen: %.2lf\n", volumen);
}
