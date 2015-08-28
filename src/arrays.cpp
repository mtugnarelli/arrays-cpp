
/*
 * Arreglos multidimensionales en C++
 *
 * Ejemplos de definición de variables y parámetros.
 *
 */

#define LONGITUD 26

#define FILAS    10
#define COLUMNAS 25

#define ANCHO       5
#define ALTO        8
#define PROFUNDIDAD 4

void inicializarLetras(char letras[COLUMNAS], char letra);

void inicializarMediciones(float mediciones[FILAS][COLUMNAS], float medicion);

void inicializarCoeficientes(int coeficientes[ANCHO][ALTO][PROFUNDIDAD], int coeficiente);

int main() {

    /* arreglo unidimensional */
    char letras[LONGITUD];
    inicializarLetras(letras, 'A');

    /* arreglo bidimensional */
    float mediciones[FILAS][COLUMNAS];
    inicializarMediciones(mediciones, 0.0);

    /* arreglo de tridimensional */
    int coeficientes[ANCHO][ALTO][PROFUNDIDAD];
    inicializarCoeficientes(coeficientes, 5);

    return 0;
}

void inicializarLetras(char letras[COLUMNAS], char letra) {

    for (int posicion = 0; posicion < LONGITUD; posicion++) {

        letras[posicion] = letra;
    }
}

void inicializarMediciones(float mediciones[FILAS][COLUMNAS], float medicion) {

    for (int fila = 0; fila < FILAS; fila++) {

        for (int columna = 0; columna < COLUMNAS; columna++) {

            mediciones[fila][columna] = 0;
        }
    }
}

void inicializarCoeficientes(int coeficientes[ANCHO][ALTO][PROFUNDIDAD], int coeficiente) {

    for (int x = 0; x < ANCHO; x++) {

        for (int y = 0; y < ALTO; y++) {

            for (int z = 0; z < PROFUNDIDAD; z++) {

                coeficientes[x][y][z] = coeficiente;
            }
        }
    }
}
