#include "header.h"

	/*
	SFML API Documentation
	https://www.sfml-dev.org/documentation/2.6.1/

	Sprites
	https://www.sfml-dev.org/documentation/2.6.1/classsf_1_1Sprite.php
	*/


int main() {
	//setting the random seed to time
	srand(time(NULL));

	//sets up the intput stream to read from the file
	std::ifstream inputStream("countries.csv");

	//the function to actually read from the file
	vector<country> countryVector;
	countryVector = initialize_countries(inputStream);
	//	return 0;

	//running the menu function
	menu(countryVector);
	return 0;
}
	

