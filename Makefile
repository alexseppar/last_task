sources = $(wildcard *.cpp)
CXX_OPT += -O2 -std=c++11
DATA_FILE = input.csv

all: check

spheres: $(sources) 
	$(CXX) $(sources) -o $@ $(CXX_OPT)

check: spheres
	./spheres ${Rmin} ${Rmax} $(DATA_FILE)

clean:
	rm -rf spheres *.o
