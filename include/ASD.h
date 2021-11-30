/**
 * @file
 * @brief Nagłówki ASD
 *
 */

#ifndef _ASD_H
#define _ASD_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

typedef struct {
	int *d;
	int rozmiar;
	int gora;
} Stos;

void init_Stos(Stos* s, int rozmiar);

void push_Stos(Stos* s, int x);

int pop_Stos(Stos* s);

typedef struct {
	int *d;
	int rozmiar;
	int poczatek;
	int koniec;
} Kolejka;

void init_Kolejka(Kolejka* k, int rozmiar);

void push_Kolejka(Kolejka* k, int x);

int pop_Kolejka(Kolejka* k);

typedef struct ElementListy{
	int d;
	struct ElementListy* nastepny;
	struct ElementListy* poprzedni;
} ElementListy;

void wymien(int* A, int* B);

int* zarezerwuj(int N);

void kopiuj(int* A, int* B, int N);

void uzupelnij_losowo(int* A, int N, int MIN, int MAX);

void drukuj_lancuch(int* A, int N);

void sortowanie_przez_wstawianie(int* A, int N);

void sortowanie_grzebieniowe(int* A, int P, int R);

void sortowanie_grzebieniowe_grzeb(int* A, int P, int Q, int R);

void sortowanie_babelkowe(int* A, int N);

void sortowanie_szybkie(int* A, int P, int R);

int sortowanie_szybkie_podziel(int* A, int P, int R);

void sortowanie_przez_zliczanie(int* A, int* B, int N, int MAX);

#endif