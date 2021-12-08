/**
 * @file
 * @brief Kolejka co jest implementowany jako Lista.
 * 
 */
#ifndef _ASD_KOLEJKA_H
#define _ASD_KOLEJKA_H
#include "Lista.h"

/**
 * @brief W praktyce Kolejka to Lista.
 * 
 */
typedef Lista Kolejka;

/**
 * @brief Inicjalizuje kolejkę.
 * 
 * @param[in, out] K Nowa Kolejka.
 * 
 */
void init_Kolejka(Kolejka* K);

/**
 * @brief Dodaje element do Kolejki.
 * 
 * @param[in, out] K Kolejka do którego trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do Kolejki.
 * 
 */
void push_Kolejka(Kolejka* K, int X);

/**
 * @brief Zabierze element z Kolejki.
 * 
 * @param[in, out] K Kolejka z której trzeba zabrać element.
 * 
 * @returns Pierwszy element z Kolejka K.
 */
int pop_Kolejka(Kolejka* K);

#endif