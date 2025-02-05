#include <cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

class Horse{
	private:
		int horseID;
		int position = 0;
		int trackLength;
	public:
		Horse(){
			horseID = 0;
			position = 0;
			trackLength = 0;
		}
		Horse(int horseID, int trackLength){
			Horse::horseID = horseID;
			Horse::trackLength = trackLength;
		}
		void advance(){
			srand(time(NULL));
			int coin = rand() % 2;
			Horse::position += coin;
		}
		void printLane(){
			for(int i = 0; i<Horse::trackLength; i++){
				if(i != position){
					cout<<". ";
				}else{
					cout<<i<<" ";
			}
			cout<<endl;
		}
		bool isWinner(){
			bool winner = false;
			if(Horse::position >= Horse::trackLength-1){
				winner = true;
				cout << "Horse " << Horse::horseID << " won the race!!" << endl;
			}
			return winner;
		}

};

class Race{
	private:
		const int trackLength = 10;
		const int numHorses = 5;
		Horse horses[numHorses];
	public:
		Race(){ 
			for(int i = 0;i<numHorses;i++){
				Race::horses[i] = Horse(i,trackLength);
			}
		}
		void run(){
			bool KEEPGOING = true;
			while(KEEPGOING){
				for(int i = 0; i<numHorses; i++){
					Race::horses[i].advance();
					Race::horses[i].printLane();
					if(isWinner(i, horses)){
						KEEPGOING = false;
					}
				}
				if(KEEPGOING){
					string usInput;
					cout<<"Press q to quit or enter to continue:";
					getline(cin, usInput);

					if(usInput == "q"){
						KEEPGOING = false;
					}
				}
			}
		}
};

int main(){
	Race r;
	Race.run();
	return 0;
}
