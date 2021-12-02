SRC := src
TEST := test
OBJ := obj
BIN := bin
INCLUDE := include

SRCS := $(wildcard $(SRC)/*.c)
TEST_SRCS := $(wildcard $(SRC)/$(TEST)/*.c)

OBJS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
TEST_OBJS := $(patsubst $(SRC)/$(TEST)/%.c, $(OBJ)/$(TEST)/%.o, $(TEST_SRCS))

TEST_BINS := $(patsubst $(SRC)/$(TEST)/%.c, $(BIN)/%, $(TEST_SRCS))

test = kopiec

.PHONY: all clean rebuild doc run

run: all
	$(BIN)/test_$(test)

all: $(TEST_BINS) index.html

$(BIN)/%: $(OBJ)/$(TEST)/%.o $(OBJS) | $(BIN)
	gcc -o $@ $< $(OBJS)

$(OBJ)/$(TEST)/%.o: $(SRC)/%.c | $(OBJ)/$(TEST)
	gcc -o $@ -c $< -I$(INCLUDE) -Wall

$(OBJ)/%.o: $(SRC)/%.c | $(OBJ)
	gcc -o $@ -c $< -I$(INCLUDE) -Wall

$(BIN):
	mkdir -p $(BIN)

$(OBJ)/$(TEST):
	mkdir -p $(OBJ)/$(TEST)

$(OBJ):
	mkdir -p $(OBJ)

index.html: doc doc/html/index.html

doc:
	rm -rf doc/* manual
	doxygen dconfig
	ln -s doc/html/index.html manual

clean:
	rm -rf $(BIN)/* $(OBJ)/*.o

rebuild: clean all