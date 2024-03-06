all: compile link

compile:
	g++ -c main.cpp -IC:\sfml\src\include -I:
	g++ -c particle.cpp -IC:\sfml\src\include -I:

link:
	g++ main.o particle.o -o main -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o