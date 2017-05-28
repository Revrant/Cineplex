CinePlex: main.o PreconditionViolationException.o Theatre.o
	g++ -std=c++11 -g -Wall main.o PreconditionViolationException.o Theatre.o -o CinePlex
main.o: main.cpp Theatre.h
	g++ -std=c++11 -g -Wall -c main.cpp
Theatre.o: Theatre.h Theatre.cpp StackInterface.h Stack.h QueueInterface.h Queue.h Stack.hpp Queue.hpp
	g++ -std=c++11 -g -Wall -c Theatre.cpp
PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -Wall -c PreconditionViolationException.cpp
clean:
	rm *.o CinePlex
