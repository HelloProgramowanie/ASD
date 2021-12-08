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

/**
 * @brief Wydrukuje na ekran kopiec (nie warto używać jeśli
 *        liczba elementów jest większa niż 63).
 */
void drukuj_Statyczny_Kopiec(Statyczny_Kopiec* K);

/**
 * @brief Ważna procedura do operowania na Kopcach.
 * @details Zakładając że Kopcy z korzeniem 
 *          lewo_Statyczny_Kopiec(i) oraz prawo_Statyczny_Kopiec(i)
 *          są Kopicami typu max, ale element o indeksie i może
 *          być mniejszy od jego 'dzieckami' i w tym wypadku
 *          Kopiec z korzeniem i już nie jest Kopcem typu max.
 *          Ta procedura stoczy element o indeksie i w dół w Kopcu tak,
 *          żeby Kopiec z korzeniem i był Kopcem typu max.
 * 
 * @param K Kopiec
 * @param i Indeks elementu Kopca.
 */
void max_kopcuj_Statyczny_Kopiec(Statyczny_Kopiec* K, int i);

/**
 * @brief Ważna procedura do operowania na Kopcach.
 * @details Z dołu do góry użyję procedurę max_kopcuj_Statyczny_Kopiec()
 *          żeby konwertować tablice w Kopiec typu max.
 * 
 * @param K Kopiec
 */
void buduj_max_kopiec_Statyczny_Kopiec(Statyczny_Kopiec* K);
#endif