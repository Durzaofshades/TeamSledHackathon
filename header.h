#pragma once
#define _CRT_SECURE_NO_WARNINGS

// C++ Libraries
#include <iostream> //cin and cout
#include <fstream> //file commands
#include <string> //string identifier
#include <cstdlib> //rand() & srand()
#include <time.h> //time
#include <vector> //vectors

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

//defnine this function early since its needed to remove the dashes in class constructor
std::string filter_input(std::string word);


using namespace std;


// Object for Country
class country {
public:

    //all the objects in the class
    std::string name;
    std::string continent;
    std::string capital;
    std::string ISO_A2;
    std::string flagFileLocation;
    sf::Sprite sprite;
    country(const country&) = default;

    country(std::ifstream& inputStream) {
        inputStream >> name >> continent >> capital >> ISO_A2;
        name = filter_input(name);
        continent = filter_input(continent);
        capital = filter_input(capital);
        flagFileLocation = "flag/" + ISO_A2 + ".png";
        
        //cout << "->" << name << "|" << continent << "|" << capital <<  "|" << ISO_A2 << "|" << flagFileLocation << endl;
        sf::Texture MapTexture;
		
        if (MapTexture.loadFromFile("CountryOutline/" + name + ".png")) {
		    sf::Sprite sprite(MapTexture);
		    sprite.setScale(0.5, 0.5);
        }

    };
};

//function declarations
vector<country> initialize_countries(std::ifstream& inputStream);
int random_country();
void menu(vector<country> countryVector);
int Outline_Name(vector<country> countryVector);
int Name_Capital(vector<country> countryVector);
int Flag_Name(vector<country> countryVector);
int Flag_Capital(vector<country> countryVector);
