#include <iostream>
#include <string>
#include <cstdlib>
#include "race.h"
#include "horse.h"

using namespace std;

Race::Race(){
	for(int i = 0; i<numHorses;i++){
		Race::horses[i] = Horse(i,trackLength);
	}
}

void Race::run(){
	bool KEEPGOING = true;
	while(KEEPGOING){
		for(int i = 0; i<numHorses; i++){
			horses[i].advance();
			horses[i].printLane();
			if(horses[i].isWinner()){
				KEEPGOING = false;
			}
		}

		if(KEEPGOING){
			string usInput;
			cout<<"press q to quit or enter to continue: ";
			getline(cin, usInput);

			if(usInput == "q"){
				KEEPGOING = false;
			}
		}
	}
}

