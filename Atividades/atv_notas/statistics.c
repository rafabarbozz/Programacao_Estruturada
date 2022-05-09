#include "statistcs.h"


float media(int *arr, int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += arr[i];
    }
    soma = soma / n;
    return soma;
}
 
int max(int *arr, int n){
    int maior = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}

int min(int *arr, int n){
    int menor = 0;
    for (int i= 0; i < n; i++){
        if (arr[i] < menor){
            menor = arr[i];
        }
    }
    return menor;
}