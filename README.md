# ASD = Algorytmy i Struktury Danych

Zbiór często używanych algorytmów i struktur danych

## Pobieranie

Nawiguj do sympatycznego miejsca na swoim komputerze n.p.
```bash
cd ~
mkdir ASD
cd ASD
```

Klonuj ten git:
```bash
git clone https://github.com/HelloProgramowanie/ASD.git
```

## Kompilacja
Kompiluj za pomocą:
```bash
make all
```

## Uruchomienie testów

Plik `include/sortowanie.h` zawiera ustawienia do każdego testu ze sortowaniem. N to rozmiar łańcuchu do sortowania, MIN to minimalna wartość danych, MAX to maksymalna wartość danych.

Uruchom za pomocą:
```bash
make run test=nazwa_wybranego_algorytmu_lub_struktury
```
gdzie *nazwa_wybranego_algorytmu_lub_struktury* należy wymienić na
* Kolejka
* Stos
* sortowanie_babelkowe
* sortowanie_grzebieniowe
* sortowanie_przez_wstawianie
* sortowanie_przez_zliczanie
* sortowanie_szybkie

## Licencja/ograniczenia

Jeśli chcesz, możesz bez ograniczeń używać części lub całość kodu.