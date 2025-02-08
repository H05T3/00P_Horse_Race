horseRace: horse.o main.o race.o
	g++ -g *.o -o horseRace

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

race.o: horse.h race.h race.cpp
	g++ -g -c race.cpp

main.o: horse.h race.h main.cpp
	g++ -g -c main.cpp

run: horseRace
	./horseRace

clean:
	rm *.o
	rm horseRace

debug: horseRace
	gdb horseRace
