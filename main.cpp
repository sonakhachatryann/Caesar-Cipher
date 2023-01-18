#include "CaesarCipher.h"

int main() {
	unsigned function_number{};
	std::cout << "Welcome to the Caesar's Cipher algorithm!" << std::endl;
	std::cout << "Please enter 1 if you want to encode some text or 2 if you want to decode a text." << std::endl;
	do {
		std::cin >> function_number;
		if (function_number != one && function_number != two) {
			std::cout << "The inputted number was wrong, please try again!" << std::endl;
		}
		else {
			break;
		}
	} while (true);
	if (function_number == one) {
		std::string plain_text;
		unsigned key{};
		std::cout << "Enter the text you want to encode consisting of only letters." << std::endl;
		do {
			std::cin.ignore();
			std::getline(std::cin, plain_text);
			if (!check_text(plain_text)) {
				std::cout << "Please enter the text correctly!" << std::endl;
			}
			else {
				break;
			}
		} while (true);
		std::cout << "Enter the key of the algorithm between 1 and 25." << std::endl;
		do {
			std::cin >> key;
			if (!check_number(key)) {
				std::cout << "Please enter the key correctly!" << std::endl;
			}
			else {
				break;
			}
		} while (true);
		std::string encoded_text = encode(plain_text, key);
		std::cout << "The encoded text is " << encoded_text;
	}
	if (function_number == two) {
		std::string encoded_text;
		unsigned key{};
		std::cout << "Enter the text you want to decode consisting of only letters." << std::endl;
		do {
			std::cin.ignore();
			std::getline(std::cin, encoded_text);
			if (!check_text(encoded_text)) {
				std::cout << "Please enter the text correctly!" << std::endl;
			}
			else {
				break;
			}
		} while (true);
		std::cout << "Enter the key of the algorithm between 1 and 25." << std::endl;
		do {
			std::cin >> key;
			if (!check_number(key)) {
				std::cout << "Please enter the key correctly!" << std::endl;
			}
			else {
				break;
			}
		} while (true);
		std::string decoded_text = decode(encoded_text, key);
		std::cout << "The decoded text is " << decoded_text;
	}
	return 0;
}