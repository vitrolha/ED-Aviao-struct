#include <stdio.h>
#include <stdlib.h>

struct Aviao{

char modelo[10],fabricante[10],motor[10];
int passageiros,velocidade;
float comprimento, altura,altitude;

};

int main(){

struct Aviao aviao;

printf("Modelo: \n");
gets(aviao.modelo);
fflush(stdin);

printf("Fabricante: \n");
gets(aviao.fabricante);
fflush(stdin);

printf("Passageiros: \n");
scanf("%i",&aviao.passageiros);
fflush(stdin);

printf("Comprimento: \n");
scanf("%f",&aviao.comprimento);
fflush(stdin);

printf("Altura: \n");
scanf("%f",&aviao.altura);
fflush(stdin);

printf("Velocidade: \n");
scanf("%i",&aviao.velocidade);
fflush(stdin);

printf("Altitude: \n");
scanf("%f",&aviao.altitude);
fflush(stdin);

printf("Motor: \n");
gets(aviao.motor);
fflush(stdin);

printf("Modelo: %s, Fabricante: %s, Passageiro: %i, Comprimento: %.2f, Altura: %.2f, Velocidade: %i, Altitude: %.2f, Motor: %s",aviao.modelo,
       aviao.fabricante, aviao.passageiros, aviao.comprimento, aviao.altura, aviao.velocidade, aviao.altitude, aviao.motor);

}
