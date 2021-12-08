/**
 * @file
 * @brief Struktura danych Lista
 * @details Struktura do przechowania danych jako Lista.
 *          Można dodać elementy do początku, lub do końca listy.
 *          Można zabrać elementy od początku, lub od końca listy.
 */
#ifndef _ASD_LISTA_H
#define _ASD_LISTA_H
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Element listy.
 * 
 */
typedef struct Element_Listy{
    int dana; /**< Dana */
    struct Element_Listy* nastepny; /**< Następny element listy */
    struct Element_Listy* poprzedni; /**< Poprzedni element listy */
} Element_Listy;

/**
 * @brief Lista.
 * @details Lista która wie gdzie się zaczyna, gdzie się skończy,
 *          można dodać nowe elementy do początku i do końca,
 *          można zabrać elementy od początku i od końca.
 * 
 */
typedef struct Lista{
    int rozmiar; /**< ilość elementów w liscie */
	Element_Listy* pierwszy; /**< pierwszy element listy */
	Element_Listy* ostatni; /**< ostatni element listy */
} Lista;

/**
 * @brief Inicjalizuje listę.
 * 
 * @param[in, out] L Nowa Lista.
 * 
 */
void init_Lista(Lista* L);

/**
 * @brief Dodaje element do początku listy.
 * 
 * @param[in, out] L Lista do której trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do listy.
 * 
 */
void push_Lista(Lista* L, int X);

/**
 * @brief Dodaje element do końca listy.
 * 
 * @param[in, out] L Lista do której trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do listy.
 * 
 */
void push_back_Lista(Lista* L, int X);

/**
 * @brief Zabierze element z początku listy L.
 * 
 * @param[in, out] L Lista z której trzeba zabrać pierwszy element.
 * 
 * @returns Pierwszy element z Listy L.
 */
int pop_Lista(Lista* L);

/**
 * @brief Zabierze element z końca listy L.
 * 
 * @param[in, out] L Lista z której trzeba zabrać ostatni element.
 * 
 * @returns Ostatni element z Listy L.
 */
int pop_back_Lista(Lista* L);

#endif