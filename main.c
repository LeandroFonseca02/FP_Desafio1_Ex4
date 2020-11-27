/*
Ismat - Engenheiria Informática 1º Ano
Fundamentos de Programação - Prof. Fracisco Pereira
Leandro Fonseca
17/11/2020 - 22:23
Resumo: Calcular Volume da esfera e Área da superficie esférica
Inputs: float fltRaio
Outputs:
*/
#include <stdio.h>


int main() {

    float fltRaio,fltVolume,fltArea;
    const float pi = 3.14159;

    printf("Insira o valor do raio: ");
    scanf("%f", &fltRaio);

    fltVolume = (fltRaio*fltRaio*fltRaio*pi*4) / 3;
    fltArea = (4*pi*fltRaio*fltRaio);

    printf("Volume: %f; Area: %f", fltVolume, fltArea);

    return 0;
}