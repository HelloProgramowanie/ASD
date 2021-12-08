/**
 * @file
 * @brief Stos co jest implementowany jako Lista.
 * 
 */
#ifndef _ASD_STOS_H
#define _ASD_STOS_H
#include "Lista.h"

/**
 * @brief W praktyce Stos to Lista.
 * 
 */
typedef Lista Stos;

/**
 * @brief Inicjalizuje stos.
 * 
 * @param[in, out] S Nowy Stos.
 * 
 */
void init_Stos(Stos* S);

/**
 * @brief Dodaje element do Stosu.
 * 
 * @param[in, out] S Stos do którego trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do stosu.
 * 
 */
void push_Stos(Stos* S, int X);

/**
 * @brief Zabierze element ze Stosu.
 * 
 * @param[in, out] S Stos z którego trzeba zabrać element.
 * 
 * @returns Ostatni element ze Stosu S.
 */
int pop_Stos(Stos* S);

#endif