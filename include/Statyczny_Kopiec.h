/**
 * @file
 * @brief Statyczny Kopiec
 */
#ifndef _ASD_STATYCZNY_KOPIEC_H
#define _ASD_STATYCZNY_KOPIEC_H
#include <stdlib.h>
#include <stdio.h>
#include <podstawowe.h>

/**
 * @brief Kopiec typu max.
 * @details Specjalne drzewo binarne w którym każdy poziom musi być 
 *          pełny oprócz ostatniego (jeśli ostatni poziom nie jest pełny,
 *          to liście ułożone są od lewej do prawej strony drzewa).
 *          Wartość danego węzła niebędącego korzeniem jest zawsze 
 *          mniejsza niż wartość jego rodzica.
 */
typedef struct Statyczny_Kopiec{
	int* d; ///< Dane
    int rozmiar; ///< Rozmiar
} Statyczny_Kopiec;
/// @example test_Statyczny_Kopiec.c

/**
 * @brief Inicjalizuje kopiec.
 * 
 * @param[in, out] K Nowy kopiec.
 * @param[in] A .
 * @param[in] N Maksymalna ilość elementów w kopcu.
 * 
 */
void init_Statyczny_Kopiec(Statyczny_Kopiec* K, int* A, int N);
/**
 * @brief Zwraca indeks rodzica elementu o indeksie i
 */
int rodzic_Statyczny_Kopiec(int i);

/**
 * @brief Zwraca indeks lewego liścia elementu o indeksie i
 */
int lewo_Statyczny_Kopiec(int i);

/**
 * @brief Zwraca indeks prawego liścia elementu o indeksie i
 */
int prawo_Statyczny_Kopiec(int i);

void drukuj_Statyczny_Kopiec(Statyczny_Kopiec* K);

void max_kopcuj_Statyczny_Kopiec(Statyczny_Kopiec* K, int i);

void buduj_max_kopiec_Statyczny_Kopiec(Statyczny_Kopiec* K);
#endif