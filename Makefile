INC=./includes
SRC=./src
OUT=./bin

$(OUT)/lab1: $(OUT)/main.o
	gcc -o $(OUT)/lab1 $(OUT)/main.o

$(OUT)/main.o: $(SRC)/main.c $(INC)/main.h
	gcc -I$(INC) -o $(OUT)/main.o -c $(SRC)/main.c

clean:
	rm $(OUT)/*.o $(OUT)/lab1
