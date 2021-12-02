#include "sortowanie.h"

void sortowanie_przez_wstawianie(int* A, int N){
    int i, j, klucz;
    for(j=1; j<N; j++)
    {
        klucz = A[j];
        // wstawianie A[j] do posortowanej tablicy A[0..j-1]
        i=j-1;
        while((i>=0) && (A[i]>klucz))
        {
            A[i+1] = A[i];
            i--;			
        }
        A[i+1]=klucz;
    }
}

void sortowanie_grzebieniowe(int* A, int P, int R){
    if(P<R)
    {
        int Q = (P+R)/2;
        sortowanie_grzebieniowe(A, P, Q);
        sortowanie_grzebieniowe(A, Q+1, R);
        sortowanie_grzebieniowe_grzeb(A,P,Q,R);
    }
}
void sortowanie_grzebieniowe_grzeb(int* A, int P, int Q, int R){
    int n1 = Q - P + 1;
    int n2 = R - Q;
    int* l=(int*)malloc(sizeof(int)*(n1+1));
    int* r=(int*)malloc(sizeof(int)*(n2+1));
    for(int i=0; i<n1; i++)
    {
        l[i] = A[P+i];
    }
    for(int j=0; j<n2; j++)
    {
        r[j] = A[Q+j+1];
    }
    l[n1]=INT_MAX;
    r[n2]=INT_MAX;
    int i=0;
    int j=0;
    for(int k = P; k<=R; k++)
    {
        if(l[i]<=r[j])
        {
            A[k] = l[i++];
        } else 
        {
            A[k] = r[j++];
        }
    }
    free(l);
    free(r);
}

void sortowanie_babelkowe(int* A, int N){
    for(int i=0; i<N; i++)
    {
        for(int j=N-1; j>i; j--)
        {
            if(A[j]<A[j-1])
            {
                wymien(&A[j-1], &A[j]);
            }
        }
    }
}

void sortowanie_szybkie(int* A, int P, int R){
    if(P<R)
    {
        int Q = sortowanie_szybkie_podziel(A, P, R);
        sortowanie_szybkie(A, P, Q);
        sortowanie_szybkie(A, Q+1, R);
    }
}

int sortowanie_szybkie_podziel(int* A, int P, int R){
    int i=P-1;
    int j=R+1;
    while(1)
    {
        do j--; while(A[j]>A[P]);
        do i++; while(A[i]<A[P]);
        if(i<j) wymien(&A[i], &A[j]);
        else return j;
    }
}
void sortowanie_przez_zliczanie(const int* A, int* B, int N, int MIN, int MAX){
    int K = MAX-MIN+1;
    int* C=zarezerwuj(K+1);
    for(int i=0;i<K;i++)
    {
        C[i]=0;
    }
    for(int j=0; j<N; j++)
    {
        C[A[j]-MIN]++;
    }
    for(int i=0;i<K;i++)
    {
        C[i] += C[i-1];
    }
    for(int j=N-1; j>=0; j--)
    {
        B[--C[A[j]-MIN]] = A[j];
    }
}

void sortowanie_przez_kopcowanie(int* A, int N){
    Statyczny_Kopiec K;
    init_Statyczny_Kopiec(&K, A, N);
    int temp = K.rozmiar;
    for(int i=temp-1; i>=1; i--){
        wymien(&(K.d[0]), &(K.d[i]));
        (K.rozmiar)--;
        max_kopcuj_Statyczny_Kopiec(&K, 0);
    }
    K.rozmiar = temp;
}