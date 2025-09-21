CC=gcc
CFLAGS=-Wall -g
OBJ=main.o functions.o

calculatrice: $(OBJ)
	$(CC) $(OBJ) -o calculatrice

main.o: main.c functions.h
	$(CC) $(CFLAGS) -c main.c

functions.o: functions.c functions.h
	$(CC) $(CFLAGS) -c functions.c

clean:
	rm -f *.o calculatrice
