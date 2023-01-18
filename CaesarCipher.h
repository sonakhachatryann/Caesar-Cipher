#include <iostream>
#include <string>

const char a = 'a';
const char z = 'z';
const char A = 'A';
const char Z = 'Z';
const char space = ' ';
const unsigned one = 1;
const unsigned two = 2;
const unsigned twenty_five = 25;

std::string& encode(std::string& text, int key);
std::string& decode(std::string& text, int key);
bool check_text(const std::string&);
bool check_number(const unsigned);