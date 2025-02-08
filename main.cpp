#include <iostream>
#include "horse.h"
#include "race.h"
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	Race r;
	r.run();
	return 0;
}
