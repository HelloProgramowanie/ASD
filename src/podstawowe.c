#include "podstawowe.h"

void wymien(int* A, int* B){
    /*
    *A = *A ^ *B;
    *B = *A ^ *B;
    *A = *A ^ *B;
    */
    int temp = *A;
    *A = *B;
    *B = temp;
}

int* zarezerwuj(int N){
    return (int*) malloc(sizeof(int)*N);
}

void kopiuj(int* A, int* B, int N){
    for(int i=0;i<N; i++) B[i]=A[i];
}

void uzupelnij_losowo(int* A, int N, int MIN, int MAX){
    for(int i=0;i<N;i++)
    {
        A[i] = rand()%(MAX-MIN+1)+MIN;
    }
}

void drukuj_lancuch(int* A, int N){
    for(int i=0;i<N;i++)
    {
        printf("%5d", A[i]);
    }
    printf("\n");
}
