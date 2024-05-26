CC = gcc
CFLAGS = -Wall
LDFLAGS = 
OBJFILES = hello.o
TARGET = hello

all: $(TARGET)

$(TARGET):$(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~

manual-run:
	gcc -c hello.c
	gcc -o hello hello.o