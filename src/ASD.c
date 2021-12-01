/**
 * @brief Algorytmy i Struktury Danych
 * 
 * @author Ali David
 */
#include "ASD.h"

/**
 * @brief Inicjalizuje Stos.
 * 
 * @param[in, out] S Nowy Stos.
 * @param[in] rozmiar Maksymalna ilość elementów w Stosie.
 * 
 */
void init_Stos(Stos* S, int rozmiar)
{
	S->d = (int*)malloc(sizeof(int)*rozmiar);
	S->rozmiar = rozmiar;
	S->gora = 0;
}

/**
 * @brief Dodaje nowy element X do Stosu S.
 * 
 * @param[in, out] S Stos do którego trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do Stosu.
 * 
 * @warning Jeżeli Stos S jest pełny przed próbą dodawania nowego
 *          elementu to program się wyłącza.
 */
void push_Stos(Stos* S, int X)
{
	S->gora+=1;
	if(S->gora>=S->rozmiar) exit(1); 
	S->d[S->gora]=X;
}

/**
 * @brief Zabierze element ze Stosu S.
 * 
 * @param[in, out] S Stos z którego trzeba zabrać element.
 * 
 * @returns Górny element ze stosu S.
 * 
 * @warning Jeżeli Stos S jest pusty przed próbą zabierania elementu
 *          to program się wyłącza.
 */
int pop_Stos(Stos* S)
{
	if(S->gora==0) exit(1);
	return S->d[S->gora--];
}

/**
 * @brief Inicjalizuje Kolejkę.
 * 
 * @param[in, out] K Nowa Kolejka.
 * @param[in] rozmiar Maksymalna ilość elementów Kolejki.
 * 
 */
void init_Kolejka(Kolejka* K, int rozmiar)
{
	K->d = (int*)malloc(sizeof(int)*rozmiar);
	K->rozmiar = rozmiar;
	K->poczatek = 0;
	K->koniec = 0;
}

/**
 * @brief Dodaje element do Kolejki K.
 * 
 * @param[in, out] K Kolejka do której trzeba dodać element.
 * @param[in] X Nowy element co trzeba dodać do Kolejki.
 * 
 * @todo sprawdzanie overflow
 */
void push_Kolejka(Kolejka* K, int X)
{
	K->d[K->koniec]=X;
	if(K->koniec==K->rozmiar-1) K->koniec = 0;
	else K->koniec++; 
}

/**
 * @brief Zabierze element z kolejki K.
 * 
 * @param[in, out] K Kolejka z której trzeba zabrać element.
 * 
 * @returns Pierwszy element z kolejki K.
 * @todo sprawdzanie underflow
 */
int pop_Kolejka(Kolejka* K)
{
	int temp = K->d[K->poczatek];
	if(K->poczatek==K->rozmiar-1) K->poczatek = 0;
	else K->poczatek++;
	return temp;
}


/**
 * @brief Wymienia wartości dwóch argumentów w jednym miejscu.
 * 
 * @param[in, out] A Wskaźnik wartości pierwszej
 * @param[in, out] B Wskaźnik wartości drugiej
 * 
 */
void wymien(int* A, int* B)

{
    /*
    *A = *A ^ *B;
    *B = *A ^ *B;
    *A = *A ^ *B;
    */
    int temp = *A;
    *A = *B;
    *B = temp;
}

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
int* zarezerwuj(int N)

{
    return (int*) malloc(sizeof(int)*N);
}

/**
 * @brief Kopiuje zawartość łańcuchu liczb całkowytych A do B.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[out] B Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A oraz łańcuhu B
 * 
 */
void kopiuj(int* A, int* B, int N)

{
    for(int i=0;i<N; i++) B[i]=A[i];
}

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
void uzupelnij_losowo(int* A, int N, int MIN, int MAX)

{
    for(int i=0;i<N;i++)
    {
        A[i] = rand()%(MAX-MIN+1)+MIN;
    }
}

/**
 * Wypisze na ekran elementy łańcuchu liczb całkowitych.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * 
 */
void drukuj_lancuch(int* A, int N)

{
    for(int i=0;i<N;i++)
    {
        printf("%5d", A[i]);
    }
    printf("\n");
}

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
void sortowanie_przez_wstawianie(int* A, int N)

{
    int i, j, klucz;
    for(j=1; j<N; j++)
    {
        klucz = A[j];
        // wstawianie A[j] do posortowanej tablicy A[0..j-1]
        i=j-1;
        while((i>=0) && (A[i]>klucz))
        {
            A[i+1] = A[i];
            i--;			
        }
        A[i+1]=klucz;
    }
}

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
void sortowanie_grzebieniowe(int* A, int P, int R)

{
    if(P<R)
    {
        int Q = (P+R)/2;
        sortowanie_grzebieniowe(A, P, Q);
        sortowanie_grzebieniowe(A, Q+1, R);
        sortowanie_grzebieniowe_grzeb(A,P,Q,R);
    }
}

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
void sortowanie_grzebieniowe_grzeb(int* A, int P, int Q, int R)

{
    int n1 = Q - P + 1;
    int n2 = R - Q;
    int* l=(int*)malloc(sizeof(int)*(n1+1));
    int* r=(int*)malloc(sizeof(int)*(n2+1));
    for(int i=0; i<n1; i++)
    {
        l[i] = A[P+i];
    }
    for(int j=0; j<n2; j++)
    {
        r[j] = A[Q+j+1];
    }
    l[n1]=INT_MAX;
    r[n2]=INT_MAX;
    int i=0;
    int j=0;
    for(int k = P; k<=R; k++)
    {
        if(l[i]<=r[j])
        {
            A[k] = l[i++];
        } else 
        {
            A[k] = r[j++];
        }
    }
    free(l);
    free(r);
}

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
void sortowanie_babelkowe(int* A, int N)

{
    for(int i=0; i<N; i++)
    {
        for(int j=N-1; j>i; j--)
        {
            if(A[j]<A[j-1])
            {
                wymien(&A[j-1], &A[j]);
            }
        }
    }
}

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
void sortowanie_szybkie(int* A, int P, int R)

{
    if(P<R)
    {
        int Q = sortowanie_szybkie_podziel(A, P, R);
        sortowanie_szybkie(A, P, Q);
        sortowanie_szybkie(A, Q+1, R);
    }
}

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
int sortowanie_szybkie_podziel(int* A, int P, int R)

{
    int i=P-1;
    int j=R+1;
    while(1)
    {
        do j--; while(A[j]>A[P]);
        do i++; while(A[i]<A[P]);
        if(i<j) wymien(&A[i], &A[j]);
        else return j;
    }
}


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
void sortowanie_przez_zliczanie(const int* A, int* B, int N, int MIN, int MAX)
{
    int K = MAX-MIN+1;
    int* C=zarezerwuj(K+1);
    for(int i=0;i<K;i++)
    {
        C[i]=0;
    }
    for(int j=0; j<N; j++)
    {
        C[A[j]-MIN]++;
    }
    for(int i=0;i<K;i++)
    {
        C[i] += C[i-1];
    }
    for(int j=N-1; j>=0; j--)
    {
        B[--C[A[j]-MIN]] = A[j];
    }
}
