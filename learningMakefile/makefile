CXX := g++
CXXFLAGS_COMPILE := -Wall -Os -c
CXXFLAGS_LINK := -Wall -Os
MAIN := main.cpp
EXAMPLECLASS := exampleClass.cpp
EXAMPLECLASS_HEADER := exampleClass.h

output: main.o exampleClass.o
	$(CXX) $(CXXFLAGS_LINK) main.o exampleClass.o -o output.exe

main.o: $(MAIN)
	$(CXX) $(CXXFLAGS_COMPILE) $(MAIN) -o main.o

exampleClass.o: $(EXAMPLECLASS) $(EXAMPLECLASS_HEADER)
	$(CXX) $(CXXFLAGS_COMPILE) $(EXAMPLECLASS) -o exampleClass.o