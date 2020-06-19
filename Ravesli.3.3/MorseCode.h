#pragma once

#include <iostream>
#include <unordered_map>
#include <queue>
#include <exception>

class MorseCode
{
private:
	static char is;
	std::unordered_map<std::string, std::string> m_morseAlphabet = {	{".-",   "�"}, {"-...", "�"}, {".--",   "�"}, {"--.",  "�"},
																		{"-..",  "�"}, {".",    "�"}, {"...-",  "�"}, {"--..", "�"},
																		{"..",   "�"}, {".---", "�"}, {"-.-",   "�"}, {".-..", "�"},
																		{"--",   "�"}, {"-.",   "�"}, {"---" ,  "�"}, {".--.", "�"},
																		{".-.",  "�"}, {"...",  "�"}, {"-",     "�"}, {"..-",  "�"},
																		{"..-.", "�"}, {"....", "�"}, {"-.-.",  "�"}, {"---.", "�"},
																		{"----", "�"}, {"--.-", "�"}, {".--.-", "�"}, {"-.--", "�"},
																		{"-..-", "�"}, {"..-..","�"}, {"..--",  "�"}, {".-.-", "�"}};
public:
	MorseCode(){}
	~MorseCode(){}
	std::string msgMorse(std::queue<std::string> msg) {
		std::string message;
		if (msg.empty()) {
			return "!!!EMPTY!!!";
		}
		while (!msg.empty()) {
			try {
				message += m_morseAlphabet.at(msg.front());
				msg.pop();
			}
			catch (std::exception) {
				message += "*";
				msg.pop();
			}
		}
		return message;
	}
};

