/*Написать программу, которая объединяет два упорядоченных 
по возрастанию массива в один, также упорядоченный, массив.*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>


int main()
{
	std::vector<float> first;
	std::vector<float> second;
	
	std::cout << "Enter elements of first massive: ";
	float element;
	while (true) {
		std::cin >> element;
		if (std::cin.fail()) {
			std::cin.ignore(32000, '\n');
			continue;
		}
		if (element == 0) break;
		first.push_back(element);
	}
	std::cout << "Enter elements of second massive: ";
	while (true) {
		std::cin >> element;
		if (std::cin.fail()){
			std::cin.ignore(32000, '\n');
			continue;
		}
		if (element == 0) break;
			second.push_back(element);
	}

	for (auto it : second) {
		first.push_back(it);
	}

	sort(first.begin(), first.end());
	
	for (auto it : first) {
		if (it != *first.end())
			std::cout << it << " - ";
		else std::cout << it;
	}

	return 0;
}
