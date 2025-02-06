# 00P_Horse_Race
### Object Oriented Version of the Horse Race

# Classes and Fuctions:

## class Horse{}:
* Has 3 private variables:
	* int horseID: the number the horse is.
	* int position: The position of the horse
	* int trackLength: The length of the track
* Has 5 public functions:
	* Horse(): A constructor for the class, which sets all variables to 0;
	* Horse(int horseID, int trackLength): A constructor for the class with 2 parameters, *horseID* and *trackLength*
	* void advance(): uses a random number generation between 0 and 1 and adds that to *position* to move the horse either by 1 or 0.
	* void printLane(): Uses a for look to go from 0 to *trackLength* of the track to find the horse's position and prints "." in places where the horse is not at, and prints the horse's number in the place where it is at.
	* bool isWinner(): creates a boolean variable called *winner* and sets it to false, then checks to see if the horse is at the end of the track, and if it is, it sets *winner* to true and returns it to where it is called.

## class Race{}:
* Has 3 private variables:
	* const int trackLength: A constant variable which is set to be the length of the track
	* const int numHorses: A constant variable which is set to be the number of horses on the track
	* Horse horses[]: A array called *horses* which is filled with the Horse objects.
* Has 2 public functions:
	* Race(): The constructor for the class that uses a for loop from 0 to *numHorses* and initializes each object in *horses* with it's number, i, and the *trackLength*
	* void run(): A function that runs the whole race using a while loop set to keep running if *KEEPGOING* is set to true; Uses a for loop inside the while loop that goes from 0 to *numHorses* and for each Horse in *horses* it calls the advance function and the printLane function; It also uses an if statement to check if each horse has won by calling the isWinner function of each horse, and sets *KEEPGOING* to false if true
		- There is also a if statement inside the while loop that asks the user if they want to keep going by pressing enter, or quit by pressing q which sets *KEEPGOING* to false.

## int main():
* Sets srand(time(NULL)) to use the random number generator; Creates the Race object and sets it to value r; calls the run function in r to run a race; returns 0 when the program ends.
