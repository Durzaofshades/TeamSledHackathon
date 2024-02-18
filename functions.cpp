#include "header.h"


//function to create all of the country objects
vector<country> initialize_countries(std::ifstream& inputStream) {
    
//creating a vector for the data
    static vector<country> countryVector;

    // Reading the country objects from the file

    // European countries
    country Russia(inputStream);
    country Germany(inputStream);
    country United_Kingdom(inputStream);
    country France(inputStream);
    country Italy(inputStream);
    country Spain(inputStream);
    country Poland(inputStream);
    country Ukraine(inputStream);
    country Romania(inputStream);
    country Netherlands(inputStream);
    country Belgium(inputStream);
    country Sweden(inputStream);
    country Czech_Republic(inputStream);
    country Greece(inputStream);
    country Portugal(inputStream);
    country Hungary(inputStream);
    country Belarus(inputStream);
    country Austria(inputStream);
    country Switzerland(inputStream);
    country Serbia(inputStream);
    country Bulgaria(inputStream);
    country Denmark(inputStream);
    country Slovakia(inputStream);
    country Finland(inputStream);
    country Norway(inputStream);
    country Ireland(inputStream);
    country Croatia(inputStream);
    country Moldova(inputStream);
    country Bosnia_and_Herzegovina(inputStream);
    country Albania(inputStream);
    country Lithuania(inputStream);
    country Slovenia(inputStream);
    country North_Macedonia(inputStream);
    country Latvia(inputStream);
    country Estonia(inputStream);
    country Cyprus(inputStream);
    country Luxembourg(inputStream);
    country Montenegro(inputStream);
    country Malta(inputStream);
    country Iceland(inputStream);
    country Andorra(inputStream);
    country Liechtenstein(inputStream);
    country Monaco(inputStream);
    country San_Marino(inputStream);
    country Vatican_City(inputStream);
    
    // Asian Countries
    country Afghanistan(inputStream); 
    country Armenia(inputStream); 
    country Azerbaijan(inputStream); 
    country Bahrain(inputStream); 
    country Bangladesh(inputStream); 
    country Bhutan(inputStream); 
    country Brunei(inputStream); 
    country Cambodia(inputStream); 
    country China(inputStream); 
    country East_Timor(inputStream); 
    country Georgia(inputStream); 
    country Hong_Kong(inputStream); 
    country India(inputStream); 
    country Indonesia(inputStream); 
    country Iran(inputStream); 
    country Iraq(inputStream); 
    country Israel(inputStream); 
    country Japan(inputStream); 
    country Jordan(inputStream); 
    country Kazakhstan(inputStream); 
    country Kuwait(inputStream); 
    country Kyrgyzstan(inputStream); 
    country Laos(inputStream); 
    country Lebanon(inputStream); 
    country Macao(inputStream); 
    country Malaysia(inputStream); 
    country Maldives(inputStream); 
    country Mongolia(inputStream); 
    country Myanmar(inputStream); 
    country Nepal(inputStream); 
    country North_Korea(inputStream); 
    country Oman(inputStream); 
    country Pakistan(inputStream); 
    country Palestine(inputStream); 
    country Philippines(inputStream); 
    country Qatar(inputStream); 
    country Saudi_Arabia(inputStream); 
    country Singapore(inputStream); 
    country South_Korea(inputStream); 
    country Sri_Lanka(inputStream); 
    country Syria(inputStream); 
    country Taiwan(inputStream); 
    country Tajikistan(inputStream); 
    country Thailand(inputStream); 
    country Turkey(inputStream); 
    country Turkmenistan(inputStream); 
    country United_Arab_Emirates(inputStream); 
    country Uzbekistan(inputStream); 
    country Vietnam(inputStream); 
    country Yemen(inputStream); 






    //setting the read values into a vector so that they can be called with an index in the future
    countryVector = { Russia, Germany, United_Kingdom, France, Italy, Spain, Poland, Ukraine, Romania, Netherlands, Belgium, Sweden, Czech_Republic, Greece, Portugal, Hungary, Belarus, Austria, Switzerland, 
    Serbia, Bulgaria, Denmark, Slovakia, Finland, Norway, Ireland, Croatia, Moldova, Bosnia_and_Herzegovina, Albania, Lithuania, Slovenia, North_Macedonia, Latvia, Estonia, Cyprus, Luxembourg, Montenegro, Malta, Iceland, Andorra, Liechtenstein, Monaco, San_Marino, Vatican_City, Afghanistan, Armenia, Azerbaijan, Bahrain, Bangladesh, Bhutan, Brunei, Cambodia, China, East_Timor, Georgia, Hong_Kong, India, Indonesia, Iran, Iraq, Israel, Japan, Jordan, Kazakhstan, Kuwait, Kyrgyzstan, Laos, Lebanon, Macao, Malaysia, Maldives, Mongolia, Myanmar, Nepal, North_Korea, Oman, Pakistan, Palestine, Philippines, Qatar, Saudi_Arabia, Singapore, South_Korea, Sri_Lanka, Syria, Taiwan, Tajikistan, Thailand, Turkey, Turkmenistan, United_Arab_Emirates, Uzbekistan, Vietnam, Yemen, 
};
    
    return countryVector;
}



//returns a random flag index
int random_country() {
    return rand() % 95 + 1;
}

int random_country_europe() {
    return rand() % 45 + 1;
}


// a function to instalize the menu
void menu(vector<country> countryVector){
    //clears anything previously on the screen
	system("CLS");

    //menu choice variable
    int choice = 0;

    //printing the menu text and taking user input for the choice
    cout << "1) Outlines to Countries" << endl;
    cout << "2) Flags to Countries" << endl;
    cout << "3) Countries and Capitals" << endl;
	cout << "4) Flags to Capitals" << endl;
	cout << "5) Exit" << endl;
    cin >> choice;

    //the logic for gamemmode selection
    switch(choice){

	//outline -> name
    case 1:
        Outline_Name(countryVector);
        break;

	//flags -> name
	case 2:
        Flag_Name(countryVector);
		break;

	//name -> capitals
	case 3:
        Name_Capital(countryVector);
		break;
	
    //flags -> capitals
    case 4:
        Flag_Capital(countryVector);
		break;

    //exit case
    default:
        break;
    }

}

//function to filter out and replace any unwanted characters from reading the file
string filter_input(string word){

    //determining the length of the word
    int max = word.length();

    //filtering the undesired characters
    for (int i = 0; i < max; i++) {

        //filtering out spaces
        if (word[i] == ' '){
            word[i] = '\0';
        }

        //filtering out commas
        if (word[i] == ','){
            word[i] = '\0';
        }

        //filtering out dashes
        if (word[i] == '_') {
            word[i] = ' ';
        }
    }
    return word;
}
