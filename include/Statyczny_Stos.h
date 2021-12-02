/**
 * @file
 * @brief Statyczny Stos
 */
#ifndef _ASD_STATYCZNY_STOS_H
#define _ASD_STATYCZNY_STOS_H
#include <stdlib.h>
/**
 * @brief Struktura stos.
 * 
 */
typedef struct Statyczny_Stos{
	int *d; /**< Dane */
	int rozmiar; /**< Rozmiar Statyczny_Stosu */
	int gora; /**< Indeks górnego elementu Statyczny_Stosu */
} Statyczny_Stos;
/// @example test_Statyczny_Stos.c

/**
 * @brief Inicjalizuje Statyczny_Stos.
 * 
 * @param[in, out] S Nowy Statyczny_Stos.
 * @param[in] rozmiar Maksymalna ilość elementów w Statyczny_Stosie.
 * 
 */
void init_Statyczny_Stos(Statyczny_Stos* S, int rozmiar);
/// @example test_Statyczny_Stos.c

/**
 * @brief Dodaje nowy element X do Statyczny_Stosu S.
 * 
 * @param[in, out] S Statyczny_Stos do którego trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do Statyczny_Stosu.
 * 
 * @warning Jeżeli Statyczny_Stos S jest pełny przed próbą dodawania nowego
 *          elementu to program się wyłącza.
 */
void push_Statyczny_Stos(Statyczny_Stos* S, int X);

/**
 * @brief Zabierze element ze Statyczny_Stosu S.
 * 
 * @param[in, out] S Statyczny_Stos z którego trzeba zabrać element.
 * 
 * @returns Górny element ze stosu S.
 * 
 * @warning Jeżeli Statyczny_Stos S jest pusty przed próbą zabierania elementu
 *          to program się wyłącza.
 */
int pop_Statyczny_Stos(Statyczny_Stos* S);

#endif