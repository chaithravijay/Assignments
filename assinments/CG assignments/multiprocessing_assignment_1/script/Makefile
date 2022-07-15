CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: $(BIN)/app

$(BIN)/app: $(OBJ)/process.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/process.o

$(OBJ)/process.o: $(SRC)/process.cpp
	$(CC) $(CFLAGS) $(SRC)/process.cpp 
		mv *.o $(OBJ)
clean:
		rm -f a.out 
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app