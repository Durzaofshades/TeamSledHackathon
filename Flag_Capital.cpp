#include "header.h"




int Flag_Capital(vector<country> countryVector) {
	while (1) {
		//clearing the screen
		system("cls");

		//obtaining the country index
		int index = random_country();

		// Sprite Loading
		sf::Texture texture;
		if (!texture.loadFromFile(countryVector[index].flagFileLocation)) {
			return 1;
		}
		sf::Sprite sprite(texture);
		sprite.setScale((0.5), (0.5));

		//sizing the window
		int window_X, window_Y;
		std::string window_Name;
		window_X = sprite.getGlobalBounds().width;
		window_Y = sprite.getGlobalBounds().height;

		// Create Window
		sf::RenderWindow window(sf::VideoMode(window_X, window_Y), window_Name);




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
			// Clear Screen
			window.clear();

			// Draw
			window.draw(sprite);

			// Update
			window.display();

			//input text and compare index for capital
			std::string country_info = countryVector[index].capital;
			std::string input = "";
			cout << "Enter the Country Who's Capital is Shown: " << endl;
			cin >> input;

			//actions for after the input was obtained
			window.close();
			cout << "The Correct Capital is " << country_info << endl;
			system("pause");
			break;
		}
	}
	// after window is closed
	return 0;
 };