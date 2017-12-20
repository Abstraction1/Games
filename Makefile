CC=g++
CFLAGS=-c -Wall
LDFLAGS=
TARGET=clickme

SRC=/home/default/repos/github/Games/src

SOURCES=$(SRC)/main.cpp 
OBJECTS=$(SOURCES:.cpp=.o)

PREFIX=/home/default/bin

.PHONY: all clean install unistall

all: $(SOURCES) $(TARGET) 
clean:
	rm -rf $(TARGET) *.o \
	rm -rf src/*.o \
	... good!
	show
install:
	install $(TARGET) $(PREFIX)
inistall:
	rm -rf $(PREFIX)/$(TARGET)


$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
