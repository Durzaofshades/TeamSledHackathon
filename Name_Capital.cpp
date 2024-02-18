#include "header.h"


int Name_Capital(vector<country> countryVector) {
	//clear the screen
    system("CLS");

	//main running of game setting
    while (1) {

		//instalizing the country and capital randomly
        int index = random_country();


		//instalizing the variables
        std::string country_info = countryVector[index].name;
        std::string correct_capital = countryVector[index].capital;
		std::string input = "";

		//get the country guess the capital
        if (rand() % 2 == 1) {
			cout << "The Country is: " << country_info << endl << "Guess Capital Here: ";
			cin >> input;
			cout << "The Correct Capital is " << correct_capital << endl;
        }

		//get the capital guess the country
        else{
			cout << "The Capital is: " << correct_capital << endl << "Guess Country Here: ";
			cin >> input;
			cout << "The Correct Country is " << country_info << endl;
		}

		//stop and wait for user input
        system("pause");

		//exit conditional
        if (input == "exit") {
            menu(countryVector);
            break;
        }

		//clear the screen
        system("CLS");
    }
    return 0;
};