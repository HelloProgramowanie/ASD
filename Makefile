bin/main: obj/main.o obj/algorytmy.o obj/struktury_danych.o
	@echo "Konsolidacja"
	gcc -o bin/main -Wall obj/main.o obj/algorytmy.o obj/struktury_danych.o

obj/main.o: src/main.c
	@echo "Kompilacja"
	gcc -o obj/main.o -c src/main.c -Wall

obj/algorytmy.o: src/algorytmy.c
	@echo "Kompilacja"
	gcc -o obj/algorytmy.o -c src/algorytmy.c -Wall

obj/struktury_danych.o: src/struktury_danych.c
	@echo "Kompilacja"
	gcc -o obj/struktury_danych.o -c src/struktury_danych.c -Wall

.PHONY: clean run rerun setup doc

clean:
	@echo "Sprzatanie starych plikow"
	rm -f -r bin/* obj/* doc/*

run: bin/main
	@echo "Uruchomienie"
	./bin/main

rerun: clean run

doc:
	@echo "Generowanie dokumentacji"
	doxygen dconfig