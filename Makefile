CC=gcc
CFLAGS=-save-temps
OBJS=main.o
TARGET=sum

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o: main.c

clean:
	rm -f *.o
	rm -f *.s
	rm -f *.i
	rm -f $(TARGET)

