all: program

program: main.o
	clang++ main.o -o crep

main.o:
	clang++ -c main.cpp

clean:
	rm -f *.o crep
