temperatura: main.o conv.o
	g++ -Wall -pedantic -o temperatura main.o conv.o

main.o: main.cpp conv.h
	g++ -c main.cpp

conv.o: conv.cpp conv.h
	g++ -c conv.cpp

clean:
	rm *.o
