//
// Created by alex_ on 03/11/2018.
//

#ifndef BOLETIN1_ALEX_HASHING_H
#define BOLETIN1_ALEX_HASHING_H
#define FREE -1
#define DELETED -2
#define BUSY 1
typedef struct actor {

    char *apellidos;
    char *nombre;
    int edad;
    char goya;
    long int cache;
    int estado;

} actores;


void init(actores actor[], int tam);

void iniciar(actores actor[], int tam);

int buscar(actores actor[], int id, int tam, char* nombre, char* apellidos);

int buscar_pediente_clave(actores actor[], int id, int tam, char* nombre, char* apellidos);

int eliminar(actores actor[], int id, int tam, char* nombre, char* apellidos);

int eliminar_pendiente_clave(actores actor[], int id,int tam, char* nombre, char* apellidos);

float factorcarga(actores actor[], int tam);

void show(actores actor[], int tam);

int H_dependiente_clave(int id, int intentos, int tam);

void iniciar_dependiente_clave(actores actor[], int tam);

#endif //BOLETIN1_ALEX_HASHING_H
