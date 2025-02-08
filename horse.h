#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse{
	private:
		int horseID;
		int position = 0;
		int trackLength;

	public:
		Horse();
		Horse(int horseID,int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};

#endif
