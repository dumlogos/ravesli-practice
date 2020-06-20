#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>
#include <exception>

class MorseCode
{
private:
	
	static MorseCode* morseCode;

	MorseCode();
	MorseCode(const MorseCode&);
	MorseCode operator=(MorseCode&);

	std::unordered_map<std::string, std::string> m_morseAlphabet = {	{".-",   "�"}, {"-...", "�"}, {".--",   "�"}, {"--.",  "�"},
																		{"-..",  "�"}, {".",    "�"}, {"...-",  "�"}, {"--..", "�"},
																		{"..",   "�"}, {".---", "�"}, {"-.-",   "�"}, {".-..", "�"},
																		{"--",   "�"}, {"-.",   "�"}, {"---" ,  "�"}, {".--.", "�"},
																		{".-.",  "�"}, {"...",  "�"}, {"-",     "�"}, {"..-",  "�"},
																		{"..-.", "�"}, {"....", "�"}, {"-.-.",  "�"}, {"---.", "�"},
																		{"----", "�"}, {"--.-", "�"}, {".--.-", "�"}, {"-.--", "�"},
																		{"-..-", "�"}, {"..-..","�"}, {"..--",  "�"}, {".-.-", "�"}};
public:
	~MorseCode() {
		if (morseCode) {
			delete morseCode;
		}
	}
	static MorseCode* getInstance() {
		if (!morseCode) 
			morseCode = new MorseCode;
		return morseCode;
	}
	std::string msgMorse(std::vector<std::string> msg) {
		std::string message;
		if (msg.empty()) {
			return "!!!EMPTY!!!";
		}
		for (auto it : msg) {
			try {
				message += m_morseAlphabet.at(it);
			}
			catch (std::exception) {
				message += "*";
			}
		}
		return message;
	}
};

