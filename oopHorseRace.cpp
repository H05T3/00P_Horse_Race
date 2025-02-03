#include <cstdlib>
#include<ctime>
#include <iostream>

class Horse{
	private:
		int horseNum;
		int position;
		bool isWinner;
	public:
		Horse(){
			horseNum = -1;
			position = 0;
			isWinner = false;
		}
		Horse(int horseNumm){
			Horse::horseNum = horseNum;
		}
		void advance(){
			srand(time(NULL));
			int coin = rand() % 2;
			Horse::position += coin;
		}

};

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWInner(int horseNum, int* horses);
const int RACELEN = 10;

int main(){
}
