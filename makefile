mian:main.o Score.o
	g++ -o main main.o Score.o
main.o:main.cpp
	g++ -c main.cpp
Score.o:Score.cpp
	g++ -c Score.cpp
clean:
	rm *.o
