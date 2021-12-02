/**
 * @file
 * @brief Różne sposoby na sortowanie
 */
#ifndef _ASD_SORTOWANIE_H
#define _ASD_SORTOWANIE_H

#include <limits.h>
#include <stdlib.h>
#include "podstawowe.h"
#include "Statyczny_Kopiec.h"

/**
 * @brief Sortowanie przez wstawianie elementów łańcuchu liczb 
 *        całowitych.
 * 
 * @details Posortuje elementy łańcuchu liczb całowitych A o długości 
 *          N w jednym miejscu. Złożoność czasowa: Θ(N²)
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * 
 */
void sortowanie_przez_wstawianie(int* A, int N);
/// @example test_sortowanie_przez_wstawianie.c

/**
 * @brief Sortowanie grzebieniowe elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A od 
 *          elementu nr P do elementu nr R w jednym miejscu. 
 *          Złożoność czasowa: Θ(N*lg(N))
 *
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] R Indeks elementu końcowego
 * 
 */
void sortowanie_grzebieniowe(int* A, int P, int R);
/// @example test_sortowanie_grzebieniowe.c

/**
 * @brief Funkcja pomocnicza do sortowania grzebieniowego.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A od
 *          elementu nr P do elementu nr R w jednym miejscu.
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] Q Indeks elementu środkowego
 * @param[in] R Indeks elementu początkowego
 * 
 */
void sortowanie_grzebieniowe_grzeb(int* A, int P, int Q, int R);

/**
 * @brief Sortowanie bąbelkowe elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementy łańcuchu liczb całowitych A o długości 
 *          N w jednym miejscu. Złożoność czasowa: O(N²)
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu
 * 
 */
void sortowanie_babelkowe(int* A, int N);
/// @example test_sortowanie_babelkowe.c

/**
 * @brief Sortowanie szybkie elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A od 
 *          elementu nr P do elementu nr R w jednym miejscu. 
 *          Złożoność czasowa: O(N*lg(N)), w najgorszym wypadku O(N²)
 *
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] R Indeks elementu końcowego
 * 
 */

void sortowanie_szybkie(int* A, int P, int R);
/// @example test_sortowanie_szybkie.c

/**
 * @brief Funkcja pomocnicza do sortowania szybkiego.
 * 
 * @details Elementy łańcuchu liczb całkowitych A zostaną permutowane
 *          w taki sposób, że (∀i∈[P;Q])(∀j∈[Q;R]) (A[i]≤A[j]).
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks pierwszego elementu
 * @param[in] R Indeks ostatniego elementu
 * 
 * @return Q: indeks elementu łancuchu A który jest większy lub równe
 *         od każdego elementu o mniejszym indeksu, oraz mniejszy od
 *         każdego elementu o większym indeksu.
 * 
 */
int sortowanie_szybkie_podziel(int* A, int P, int R);

/**
 * @brief Sortowanie przez zliczanie elementów łańcuchu liczb 
 *        całowitych o ograniczonej wartości MIN<=A[0..N]<=MAX.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A o 
 *          ograniczonej wartości MIN<=A[0..N]<=MAX. Złożoność
 *          czasowa: O(N+K), złożność pamięciowa O(N+K), gdzie
 *          K = MAX-MIN+1. 
 * 
 *          Trzeba koniecznie wiedzieć do jakiego zakresu należą 
 *          liczby do sortowania. 
 * 
 *          Ani raz nie porównuje wartości łańcuchu A do siebie,
 *          tylko je zlicza.
 *
 * @param[in] A Łańcuch liczb całkowitych
 * @param[out] B Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu
 * @param[in] MIN minimalna wartość danych zachowanych w A
 * @param[in] MAX maksymalna wartość danych zachowanych w A
 * 
 */
void sortowanie_przez_zliczanie(const int* A, int* B, int N, int MIN, int MAX);
/// @example test_sortowanie_przez_zliczanie.c

/**
 * @brief Sortowanie przez kopcowanie.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A.
 *          Złożoność czasowa: O(N*lg(N)).
 *
 * @param[in] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu
 * 
 */
void sortowanie_przez_kopcowanie(int* A, int N);
/// @example test_sortowanie_przez_kopcowanie.c



#endif

#ifdef _TEST_
    const int N=1000; 
    const int MIN = -99;
    const int MAX = 99;
#endif