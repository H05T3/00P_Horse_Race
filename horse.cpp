#include <iostream>
#include "horse.h"

Horse::Horse(){
	Horse::horseID = -1;
	Horse::trackLength = -1;
}

Horse::Horse(int horseID, int trackLength){
	Horse::horseID = horseID;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int coin = rand() % 2;
	Horse::position += coin;
}

void Horse::printLane(){
	for(int i = 0; i<trackLength;i++){
		if(i != position){
			std::cout<<". ";
		}else{
			std::cout<<horseID<<" ";
		}
	}
	std::cout<<std::endl;
}

bool Horse::isWinner(){
	bool winner = false;
	if(position >= trackLength-1){
		winner = true;
		std::cout<< "Horse" << horseID << " won the race!!" << std::endl;
	}
	return winner;
}

