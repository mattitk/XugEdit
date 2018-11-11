CC=g++
CFLAGS=-Wall
LIBS=
EXECUTABLE = main
OBJECTS = main.o XugEdit.o XugTab.o XugWindow.o

all: $(EXECUTABLE)

clean:
	rm *.o main

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ -o $@ $(CFLAGS) $(LIBS)

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c


