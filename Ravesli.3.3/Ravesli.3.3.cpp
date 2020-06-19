/*Напишите программу-телеграф, которая принимает от пользователя
сообщение и выводит его на экран в виде последовательности точек и
тире. Вывод точек и тире можно сопровождать звуковым сигналом 
соответствующей длительности. Азбука Морзе для букв русского алфавита
приведена ниже.*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include "MorseCode.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	MorseCode mc;
	std::vector<std::string> msg;
	std::cout << "Enter a message in Morse code (each character write through \"Space\"\n";
	std::cout << "For stop entering message enter \"0\"\n";
	while (true) {
		std::string morseChar = "";
		char ch ;
		for(int i=0;i<5; ++i) {
			ch = _getch();
			if (ch == '.' || ch == '-') morseChar += ch;
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
	std::cout << mc.msgMorse(msg);


	return 0;
}

