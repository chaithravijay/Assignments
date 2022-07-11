CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: systemPrg

sysPrg1: $(OBJ)/systemPrg.o
	$(CC) $(LFLAGS) $(BIN)/systemPrg1 $(OBJ)/systemPrg1.o

$(OBJ)/systemPrg1.o: $(SRC)/systemPrg1.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/systemPrg1.cpp 
	mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out systemPrg1
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/systemPrg1 
