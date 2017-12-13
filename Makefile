CC=g++
CFLAGS=-c -Wall
LDFLAGS=
TARGET=clickme
SRC=src
SOURCES=$(SRC)/main.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
PREFIX=/usr/local/bini

.PHONY: all clean install unistall
all: $(SOURCES) $(TARGET) 
clean:
	rm -rf $(TARGET) *.o \
	rm -rf src/*.o \
	rm -rf home/*.o
install:
	install $(TARGET) $(PREFIX)
inistall:
	rm -rf $(PREFIX)/$(TARGET)



$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
