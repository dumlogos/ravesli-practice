/*Напишите программу-телеграф, которая принимает от пользователя
сообщение и выводит его на экран в виде последовательности точек и
тире. Вывод точек и тире можно сопровождать звуковым сигналом 
соответствующей длительности. Азбука Морзе для букв русского алфавита
приведена ниже.*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <conio.h>

std::string morseCode(std::vector<std::string>& msg) {
		std::string message;
		std::unordered_map<std::string, std::string> m_morseAlphabet = { {".-",   "А"}, {"-...", "Б"}, {".--",   "В"}, {"--.",  "Г"},
																		 {"-..",  "Д"}, {".",    "Е"}, {"...-",  "Ж"}, {"--..", "З"},
																		 {"..",   "И"}, {".---", "Й"}, {"-.-",   "К"}, {".-..", "Л"},
																		 {"--",   "М"}, {"-.",   "Н"}, {"---" ,  "О"}, {".--.", "П"},
																		 {".-.",  "Р"}, {"...",  "С"}, {"-",     "Т"}, {"..-",  "У"},
																		 {"..-.", "Ф"}, {"....", "Х"}, {"-.-.",  "Ц"}, {"---.", "Ч"},
																		 {"----", "Ш"}, {"--.-", "Щ"}, {".--.-", "ъ"}, {"-.--", "Ы"},
																		 {"-..-", "Ь"}, {"..-..","Э"}, {"..--",  "Ю"}, {".-.-", "Я"} };
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


int main()
{
	setlocale(LC_ALL, "Russian");
	std::vector<std::string> msg;
	std::cout << "Enter a message in Morse code (each character write through \"Space\")\n";
	std::cout << "For stop entering message enter \"0\"\n";
	while (true) {
		std::string morseChar = "";
		char ch ;
		for(int i=0;i<5; ++i) {
			ch = _getch();
			if (ch == '.' || ch == '-') {
				std::cout << "\a";
				morseChar += ch;
			}
			else if (ch == ' ' || ch == '0') break;
			else std::cin.ignore();
		}
		
		if (!morseChar.empty()  && ch != '0') {
			msg.push_back(morseChar);
			morseChar.clear();
		}
		if (ch == '0') break;
	}
	for (auto it : msg) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
	std::cout << morseCode(msg);


	return 0;
}

