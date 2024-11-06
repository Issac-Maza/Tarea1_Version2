#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "datos.h"
#include "calculos.h"

#define MAX_LINE 256
#define USERS_FILE "usuarios.txt"
#define LOG_FILE "bitacora.txt"


void getFechaActual(char *buffer, int bufferSize) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    strftime(buffer, bufferSize, "%Y/%m/%d", &tm);
}

// Función para escribir en la bitácora
void escribirBitacora(const char *usuario, const char *accion) {
    FILE *bitacora = fopen(LOG_FILE, "a");
    if (bitacora == NULL) {
        perror("Error al abrir el archivo de bitácora");
        exit(1);
    }
    char fecha[20];
    getFechaActual(fecha, sizeof(fecha));
    fprintf(bitacora, "%s: %s – %s\n", fecha, usuario, accion);
    fclose(bitacora);
}

// Función para validar usuario y clave
int validarUsuario(const char *usuario, const char *clave) {
    FILE *archivo = fopen(USERS_FILE, "r");
    if (archivo == NULL) {
        perror("Error al abrir el archivo de usuarios");
        return 0;
    }
    char linea[MAX_LINE];
    int valido = 0;
    while (fgets(linea, MAX_LINE, archivo)) {
        char *user = strtok(linea, " ");
        char *pass = strtok(NULL, "\n");
        if (strcmp(usuario, user) == 0 && strcmp(clave, pass) == 0) {
            valido = 1;
            break;
        }
    }
    fclose(archivo);
    return valido;
}

int main() {
    char usuario[50], clave[50];
    int figura;

    // Solicitar y validar usuario y clave
    printf("Ingrese usuario: ");
    scanf("%s", usuario);
    printf("Ingrese clave: ");
    scanf("%s", clave);

    if (!validarUsuario(usuario, clave)) {
        escribirBitacora(usuario, "Ingreso fallido usuario/clave erróneo");
        printf("Error: usuario o clave incorrecto\n");
        return 1;  // Salir del programa si la autenticación falla
    }

    escribirBitacora(usuario, "Ingreso exitoso al sistema");
    printf("Bienvenido, %s\n", usuario);

    // Lógica del menú principal
    do {
        mostrarMenu();
        printf("Ingrese una opción: ");
        scanf("%d", &figura);

        switch (figura) {
            case 1 :
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Triangulo");
                break;
	    case 2:
		solicitarDatosFigura(figura);
		escribirBitacora(usuario, "Paralelogramo");
		break;
	    case 3:
		solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Cuadrado");
		break;
	    case 4:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Rectangulo");
		break;
	    case 5:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Rombo");
                break;
	    case 6:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Trapecio");
                break;
	    case 7:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Circulo");
                break;
	    case 8:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Poligono Regular");
                break;
	    case 9:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Cubo");
                break;
	    case 10:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Cuboide");
                break;
	    case 11:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Cilindro");
                break;
	    case 12:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Esfera");
                break;
	    case 13:
                solicitarDatosFigura(figura);
                escribirBitacora(usuario, "Cono");
                break;
            case 0:
                printf("Saliendo del sistema.\n");
                escribirBitacora(usuario, "Salida del sistema");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }

        if (figura != 0) {
            char respuesta;
            do {
                printf("¿Desea realizar el análisis de otra figura geométrica? (s/n): ");
                scanf(" %c", &respuesta);
                respuesta = tolower(respuesta);

                if (respuesta == 'n') {
                    figura = 0;
                    escribirBitacora(usuario, "Salida del sistema");
                } else if (respuesta == 's') {
                    break;
                } else {
                    printf("Respuesta no válida. Por favor, ingrese 's' para sí o 'n' para no.\n");
                }
            } while (respuesta != 's' && respuesta != 'n');
        }

    } while (figura != 0);

    return 0;
}
