all: build run

build:
	g++ -I ./include -o ./lib/node.o -c ./src/node.cpp
	g++ -I ./include -o ./lib/liste.o -c ./src/liste.cpp
	g++ -I ./include -o ./lib/swap.o -c ./src/swap.cpp
	g++ -I ./include -o ./lib/average.o -c ./src/average.cpp





	g++ -I ./include -o ./bin/main ./lib/node.o ./lib/liste.o ./lib/swap.o ./lib/average.o  ./src/main.cpp

run:
	./bin/main

	
	
