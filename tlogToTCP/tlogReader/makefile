CXX := g++
CXXFLAGS_COMPILE := -Wall -Os -c
CXXFLAGS_LINKING := -Wall -Os


#variables with code names
MAIN_Code := main.cpp
MAIN_Object :=main.o
MAVLINKPARSER := mavlinkParser.cpp
MAVLINKPARSER_Object := mavlinkParser.o
MAVLINKPARSER_Header := mavlinkParser.h

#output files
OUTPUT := output.exe

#file addresses variables
TLOG_FILE_ADDRESS := "C:\Users\Ameer\OneDrive - aus.co.in\Documents\Qt_projects\qt_software_projects\qt_software_projects\tlogToTCP\tlogReader\18.07.32_FlightData.tlog"


output.o: $(MAIN_Object) $(MAVLINKPARSER_Object)
	$(CXX) $(CXXFLAGS_LINKING) $(MAIN_Object) $(MAVLINKPARSER_Object) -o $(OUTPUT)

main.o: $(MAIN_Code)
	$(CXX) $(CXXFLAGS_COMPILE) $(MAIN_Code) -o $(MAIN_Object)

mavlinkParser.o: $(MAVLINKPARSER) $(MAVLINKPARSER_Header)
	$(CXX) $(CXXFLAGS_COMPILE) $(MAVLINKPARSER) -o $(MAVLINKPARSER_Object)

run:
	$(OUTPUT) $(TLOG_FILE_ADDRESS)