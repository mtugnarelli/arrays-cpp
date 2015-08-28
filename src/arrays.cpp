
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

/* Definición de nombres alternativos (también llamados sinónimos o alias) a los tipos de arrays
 * para simplificar su uso */

typedef char VectorDeLetras[COLUMNAS];

typedef float MatrizDeMediciones[FILAS][COLUMNAS];

typedef int CuboDeCoeficientes[ANCHO][ALTO][PROFUNDIDAD];


void inicializarLetras(VectorDeLetras letras, char letra);

void inicializarMediciones(MatrizDeMediciones mediciones, float medicion);

void inicializarCoeficientes(CuboDeCoeficientes coeficientes, int coeficiente);


int main() {

    /* arreglo unidimensional */
    VectorDeLetras letras;
    inicializarLetras(letras, 'A');

    /* arreglo bidimensional */
    MatrizDeMediciones mediciones;
    inicializarMediciones(mediciones, 0.0);

    /* arreglo de tridimensional */
    CuboDeCoeficientes coeficientes;
    inicializarCoeficientes(coeficientes, 5);

    return 0;
}

void inicializarLetras(VectorDeLetras letras, char letra) {

    for (int posicion = 0; posicion < LONGITUD; posicion++) {

        letras[posicion] = letra;
    }
}

void inicializarMediciones(MatrizDeMediciones mediciones, float medicion) {

    for (int fila = 0; fila < FILAS; fila++) {

        for (int columna = 0; columna < COLUMNAS; columna++) {

            mediciones[fila][columna] = 0;
        }
    }
}

void inicializarCoeficientes(CuboDeCoeficientes coeficientes, int coeficiente) {

    for (int x = 0; x < ANCHO; x++) {

        for (int y = 0; y < ALTO; y++) {

            for (int z = 0; z < PROFUNDIDAD; z++) {

                coeficientes[x][y][z] = coeficiente;
            }
        }
    }
}
