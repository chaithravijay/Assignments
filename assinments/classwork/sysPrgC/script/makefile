CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: systemPrgC

sysPrgC: $(OBJ)/systemPrgC.o
	$(CC) $(LFLAGS) $(BIN)/systemPrgC $(OBJ)/systemPrgC.o

$(OBJ)/systemPrgC.o: $(SRC)/systemPrgC.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/systemPrgC.cpp 
	mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out systemPrg1
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/systemPrg1 
