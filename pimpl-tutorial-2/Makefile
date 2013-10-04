CXX = g++
CXXFLAGS = -Wall -g -pthread --std=c++11

all: pimpl_demo

pimpl_demo: runner.o main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm *.o pimpl_demo

depend:
	makedepend *.cpp

# DO NOT DELETE

main.o: runner.h
runner.o: runner.h runnerImpl.h
