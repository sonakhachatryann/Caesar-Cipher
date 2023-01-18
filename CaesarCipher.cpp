#include "CaesarCipher.h"

std::string& encode(std::string& text, int key) {
	for (size_t i = 0; i < text.size(); ++i) {
		if (text[i] >= a && text[i] <= z) {
			if (text[i] + key > z) {
				text[i] += key - z + a - one;
			}
			else {
				text[i] += key;
			}
		}
		else if (text[i] >= A && text[i] <= Z) {
			if (text[i] + key > Z) {
				text[i] += key - Z + A - one;
			}
			else {
				text[i] += key;
			}
		}
	}
	return text;
}

std::string& decode(std::string& text, int key) {
	for (size_t i = 0; i < text.size(); ++i) {
		if (text[i] >= a && text[i] <= z) {
			if (text[i] - key > z) {
				text[i] -= key + z - a + one;
			}
			else {
				text[i] -= key;
			}
		}
		else if (text[i] >= A && text[i] <= Z) {
			if (text[i] - key > Z) {
				text[i] -= key + Z - A + one;
			}
			else {
				text[i] -= key;
			}
		}
	}
	return text;
}

bool check_text(const std::string& text) {
	for (size_t i = 0; i < text.size(); ++i) {
		if ((text[i] >= A && text[i] <= Z) || (text[i] >= a && text[i] <= z) || text[i] == ' ') {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

bool check_number(const unsigned number) {
	if (number < one || number > twenty_five) {
		return false;
	}
	return true;
}