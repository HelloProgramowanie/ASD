BIN := ./bin
OBJ := ./obj
SRC := ./src
INCLUDE := ./include
TEST_C_FILES := $(shell find $(SRC)/test/ -type f -name '*.c')
TEST_O_FILES := $(patsubst $(SRC)/test/%.c, $(OBJ)/test/%.o, $(TEST_C_FILES))
TEST_EXECUTABLES := $(patsubst $(SRC)/test/%.c, $(BIN)/test/%, $(TEST_C_FILES))

test := Stos

.PHONY: all clean run doc

all: $(TEST_EXECUTABLES)

doc:
	rm -f -r doc/html/* doc/rtf/*
	doxygen dconfig

run: all
	./bin/test/$(test)_test

clean:
	rm -rf ./bin ./obj

$(BIN)/test/%: $(OBJ)/test/%.o $(OBJ)/ASD.o | $(BIN)/test/
	gcc -o $@ $< $(OBJ)/ASD.o

./obj/test/%.o: $(SRC)/test/%.c | $(OBJ)/test/
	gcc -o $@ -c $< -I./include/ -Wall

./obj/ASD.o: $(SRC)/ASD.c | ./obj/
	gcc -o $(OBJ)/ASD.o -c $(SRC)/ASD.c -I$(INCLUDE) -Wall

./obj/:
	mkdir -p ./obj/

./bin/test/:
	mkdir -p ./bin/test/

./obj/test/:
	mkdir -p ./obj/test/