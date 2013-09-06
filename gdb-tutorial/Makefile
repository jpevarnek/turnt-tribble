CXX = g++
CXXFLAGS = -Wall -g -pthread --std=c++11

all: gdb_demo

gdb_demo: parent.o child.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm *.o gdb_demo
