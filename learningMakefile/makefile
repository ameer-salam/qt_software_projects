CXX  = g++
CFLAGS = -Wall -Os -c

#check if the main.o and exampleClass.o exist and if yes then generate executable
output: main.o exampleClass.o
	$(CXX) $(CFLAGS) main.o exampleClass.o -o output.exe

#to generate the object file of main.cpp if main.cpp is changed
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp -o main.o

exampleClass.o: exampleClass.cpp exampleClass.h
	$(CXX) $(CFLAGS) exampleClass.cpp -o exampleClass.o

