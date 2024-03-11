all: compile link

compile:
	g++ -c collision_main.cpp -IC:\sfml\src\include -I:

link:
	g++ collision_main.o -o collision_main -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o