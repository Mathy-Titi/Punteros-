#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Utilizar la  funcion fopen(), para saber si existe un archivo (*txt)

int main() {
  FILE *fd;
  char direc[] = "prueba1.txt";
  
  fd = fopen(direc, "r");
  if(fd==NULL){
    printf("No se encontro el archivo");
  }else{
    printf("el archivo si existe\n");
    printf("Su ubicacion es: %s", direc);
  }
  return 0;
}