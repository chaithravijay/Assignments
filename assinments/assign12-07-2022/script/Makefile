CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app
$(BIN)/app: $(OBJ)/exam.o
        $(CC) $(LFLAGS) $(BIN)/app $(OBJ)/exam.o

$(OBJ)/exam.o:$(SRC)/emp.cpp
        $(CC) $(CFLAGS) $(IFLAGS) $(SRC)/emp.cpp -o $(OBJ)/exam.o

clean:
        @echo "Cleaning the Project"
        rm -f $(OBJ)/*.o
        rm -f a.out
      