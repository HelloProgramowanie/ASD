/**
 * @file
 * @brief Statyczna Kolejka co używa tablicę do zachowania danych.
 */
#ifndef _ASD_STATYCZNA_KOLEJKA_H
#define _ASD_STATYCZNA_KOLEJKA_H
#include <stdlib.h>

/**
 * @brief Statyczna Kolejka.
 * 
 */
typedef struct Statyczna_Kolejka{
    /**@{*/
	int *d; /**< Dane */
	int rozmiar; /**< Rozmiar Kolejki */
	int poczatek; /**< Indeks pierwszego elementu Kolejki */
	int koniec; /**< Indeks pierwszego wolnego miejsca w Kolejce */
    /**@}*/
} Statyczna_Kolejka;

/**
 * @brief Inicjalizuje Kolejkę.
 * 
 * @param[in, out] K Nowa Statyczna_Kolejka.
 * @param[in] rozmiar Maksymalna ilość elementów Kolejki.
 * 
 */
void init_Statyczna_Kolejka(Statyczna_Kolejka* K, int rozmiar);

/**
 * @brief Dodaje element do Kolejki K.
 * 
 * @param[in, out] K Statyczna_Kolejka do której trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do Kolejki.
 * 
 * @todo sprawdzanie overflow
 */
void push_Statyczna_Kolejka(Statyczna_Kolejka* K, int X);

/**
 * @brief Zabierze element z kolejki K.
 * 
 * @param[in, out] K Statyczna_Kolejka z której trzeba zabrać element.
 * 
 * @returns Pierwszy element z Statyczna_Kolejka K.
 * @todo sprawdzanie underflow
 */
int pop_Statyczna_Kolejka(Statyczna_Kolejka* K);

#endif