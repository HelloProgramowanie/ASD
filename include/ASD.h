/**
 * @file
 * @brief Algorytmy i Struktury Danych
 */
#ifndef _ASD_H
#define _ASD_H
#include "podstawowe.h"
#include "sortowanie.h"
#include "Statyczna_Kolejka.h"
#include "Statyczny_Stos.h"
#include "Statyczny_Kopiec.h"

/**
 * @brief Element listy.
 * 
 */
typedef struct ElementListy{
	int d; /**< Dane */
	struct ElementListy* nastepny; /**< Następny element listy */
	struct ElementListy* poprzedni;/**< Poprzedni element listy */
} ElementListy;

#endif