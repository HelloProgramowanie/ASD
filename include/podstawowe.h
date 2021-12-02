/**
 * @file
 * @brief Podstawowe algorytmy używane pzez innych algorytmów.
 */
#ifndef _ASD_PODSTAWOWE_H
#define _ASD_PODSTAWOWE_H

#include <limits.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Wymienia wartości dwóch argumentów w jednym miejscu.
 * 
 * @param[in, out] A Wskaźnik wartości pierwszej
 * @param[in, out] B Wskaźnik wartości drugiej
 * 
 */
void wymien(int* A, int* B);

/**
 * @brief Zarezerwuje miejsce w pamięci dla łańcuchu liczb całkowitych
 * 
 * @details Zarezerwuje miejsce w pamięci dla łańcuchu liczb 
 *          całkowitych o długosci N, i zwraca adres początkowy nowo
 *          zarezerwowanego miejsca.
 * 
 * @param N Długość łańcuchu A
 * 
 * @return Adres początkowy nowo zarezerwowanego miejsca
 *
 */
int* zarezerwuj(int N);

/**
 * @brief Kopiuje zawartość łańcuchu liczb całkowytych A do B.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[out] B Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A oraz łańcuhu B
 * 
 */
void kopiuj(int* A, int* B, int N);

/**
 * @brief Wypełnia łańcuh liczb całkowitych A losowymi liczbami.
 * 
 * @details Wypełnia łańcuh liczb całkowitych A o długości N losowymi 
 *          liczbami ze zakresu <MIN;MAX>.
 * 
 * @param[out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * @param[in] MIN Najmniejsza wartość co może się pojawić
 * @param[in] MAX Największa wartość co może się pojawić
 * 
 */
void uzupelnij_losowo(int* A, int N, int MIN, int MAX);

/**
 * Wypisze na ekran elementy łańcuchu liczb całkowitych.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * 
 */
void drukuj_lancuch(int* A, int N);

#endif