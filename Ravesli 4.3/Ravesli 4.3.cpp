<<<<<<< HEAD
﻿/*Написать программу, которая объединяет два упорядоченных 
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
=======
﻿// Ravesli 4.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
>>>>>>> 74ade9bd0ef26d9a8661ff2705ff0c5a1e56ef32
