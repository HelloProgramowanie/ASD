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

/**
 * @brief Struktura stos.
 * 
 * @example test/Stos_test.c
 */
typedef struct Stos{
	int *d; /**< Dane */
	int rozmiar; /**< Rozmiar Stosu */
	int gora; /**< Indeks górnego elementu Stosu */
} Stos;

void init_Stos(Stos* S, int rozmiar);

void push_Stos(Stos* S, int X);

int pop_Stos(Stos* S);

/**
 * @brief Kolejka.
 * 
 * @example test/Kolejka_test.c
 */
typedef struct Kolejka{
	int *d; /**< Dane */
	int rozmiar; /**< Rozmiar Kolejki */
	int poczatek; /**< Indeks pierwszego elementu Kolejki */
	int koniec; /**< Indeks pierwszego wolnego miejsca w Kolejce */
} Kolejka;

void init_Kolejka(Kolejka* K, int rozmiar);

void push_Kolejka(Kolejka* K, int X);

int pop_Kolejka(Kolejka* K);

/**
 * @brief Element listy.
 * 
 */
typedef struct ElementListy{
	int d; /**< Dane */
	struct ElementListy* nastepny; /**< Następny element listy */
	struct ElementListy* poprzedni;/**< Poprzedni element listy */
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

void sortowanie_przez_zliczanie(const int* A, int* B, int N, int MIN, int MAX);

#endif