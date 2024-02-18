#include "header.h"




int Outline_Name(vector<country> countryVector){
		//clearing the screen
		system("cls");

		while (1) {
			//obtaining the country index
			int index = random_country();

			//sizing the window
			int window_X, window_Y;
			std::string window_Name;
			window_X = 1980 / 2;
			window_Y = 2400 / 2;
			window_Name = "Matching Outlines to Countries";

			// Create Window
			sf::RenderWindow window(sf::VideoMode(window_X, window_Y), window_Name);

			// Sprite for Unlabeled Map
			sf::Texture unlabeledMapTexture;
			if (!unlabeledMapTexture.loadFromFile("unlabeledMap.png")) {
				return 1;
			}
			sf::Sprite unlabeledMapSprite(unlabeledMapTexture);
			unlabeledMapSprite.setScale((0.5), (0.5));

			// Sprite for Sweeden Map
			sf::Texture SweedenMapTexture;
			if (!SweedenMapTexture.loadFromFile("CountryOutline/Sweeden.png")) {
				return 1;
			}
			sf::Sprite SweedenMapSprite(SweedenMapTexture);
			SweedenMapSprite.setScale((0.5), (0.5));

			while (window.isOpen()) {
				// Event Procecessing
				sf::Event event;
				while (window.pollEvent(event)) {
					// Exit Window
					if (event.type == sf::Event::Closed) {
						window.close();
						// when window is closed
					}
				}
				window.draw(unlabeledMapSprite);
				// Clear Screen
				//window.clear();

				std::string countryPicked;
				//cin >> countryPicked;
				countryPicked = "France";


				sf::Texture countryPickedTexture;
				if (!countryPickedTexture.loadFromFile("CountryOutline/" + countryPicked + ".png")) {
					cout << "Error";
				}
				else {
					cout << countryPicked << endl;
					sf::Sprite countryPickedSprite(countryPickedTexture);
					window.draw(countryPickedSprite);
				}
				
				sf::Texture FranceMapTexture;
				if (countryPicked == "France"){
					// Sprite for French Map
					if (!FranceMapTexture.loadFromFile("CountryOutline/France.png")) {
						return 1;
					}
					sf::Sprite FranceMapSprite(FranceMapTexture);
					FranceMapSprite.setScale((0.5), (0.5));
					window.draw(FranceMapSprite);
				}
				//cout << countryVector[3].name;
				//window.draw(countryVector[3].sprite);

				// Draw
				window.draw(SweedenMapSprite);

				// Update
				window.display();
			}
		}
	// after window is closed
	return 0;
}