#include <cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

//Start Horse Class
class Horse{
	private:
		//private class variables
		int horseID;
		int position = 0;
		int trackLength;
		//End class variables
	public:
		//Constructor
		Horse(){
			horseID = 0;
			position = 0;
			trackLength = 0;
		}//End constructor
		
		//Constructor with parameters
		Horse(int horseID, int trackLength){
			Horse::horseID = horseID;
			Horse::trackLength = trackLength;
		}//End constructor with parameters

		//advance method
		void advance(){
			int coin = rand() % 2;
			Horse::position += coin;
		}//end advance

		//printLane method
		void printLane(){
			for(int i = 0; i<trackLength; i++){
				if(i != position){
					cout<<". ";
				}else{
					cout<<horseID<<" ";
			
				}
			}
			cout<<endl;
		}//end printLane method

		//isWinner method
		bool isWinner(){
			bool winner = false;
			if(position >= trackLength-1){
				winner = true;
				cout << "Horse " << horseID << " won the race!!" << endl;
			}
			return winner;
		}//end isWinner method

};//End horse class

//Start Race class
class Race{
	private:
		//Private class variables
		const int trackLength = 10;
		const int numHorses = 5;
		Horse horses[5];
		//End class variables
	public:
		//Race constructor
		Race(){ 
			for(int i = 0;i<numHorses;i++){
				Race::horses[i] = Horse(i,trackLength);
			}
		}//End race constructor

		//Run method to start race
		void run(){
			bool KEEPGOING = true;
			while(KEEPGOING){
				for(int i = 0; i<numHorses; i++){
					horses[i].advance();
					horses[i].printLane();
					if(horses[i].isWinner()){
						KEEPGOING = false;
					}
				}
				//Start of user comfirmation to continue game
				if(KEEPGOING){
					string usInput;
					cout<<"Press q to quit or enter to continue:";
					getline(cin, usInput);

					if(usInput == "q"){
						KEEPGOING = false;
					}
				}//end of comfirmation
			}
		}//End run method
};//end of Race method

//Start of main method
int main(){
	srand(time(NULL));
	Race r;
	r.run();
	return 0;
}//end of main method
