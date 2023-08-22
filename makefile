main: main.o Account.o
	g++ main.o Account.o -o main
Account.o: Account.cpp Account.h
	g++ -c Account.cpp
main.o: main.cpp
	g++ -c main.cpp
run:
	./main
clean:
	rm *.o main *.dat *.txt