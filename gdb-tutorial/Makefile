CXX = g++
CXXFLAGS = -Wall -g -pthread

all: gdb_demo

gdb_demo: parent.o child.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
