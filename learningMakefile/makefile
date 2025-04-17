CXX = g++
CFLAGS = -Wall -Os -mconsole
MAIN = main.cpp
EXAMPLECLASS = exampleClass.cpp
EXAMPLECLASSHEADER = exampleClass.h

output: main.o exampleClass.o
	$(CXX) $(CFLAGS) main.o exampleClass.o -o output

main.o: main.cpp
	$(CXX) $(CFLAGS) -c $(MAIN) $(EXAMPLECLASS) -o main.o

exampleClass.o: $(EXAMPLECLASS) $(EXAMPLECLASSHEADER)
	$(CXX) $(CFLAGS) -c $(EXAMPLECLASS) -o exampleClass.o