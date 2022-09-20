//Шаблон
#include <iostream>
using namespace std;

//Линейный поиск первого вхождения элемента value в массив arr. Поиск начинается с позиции begin (по умолчанию 0)
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

//Линейный поиск последнего вхождения элемента value в массив arr. 
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//Линейный поиск последнего вхождения элемента value в массив arr. Поиск начинается с позиции begin.
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//Вывод подслова с позиции сумвола sym
void subword(char arr[], const int length, char sym) {
	int index = search_index(arr, length, sym);
	if (index == -1)
		cout << "ERROR\n";
	else {
		for (int i = index; i < length; i++)
			cout << arr[i];
		cout << '\n';
	}
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size = 10;
	int arr[size]{ 6, 4, 1, 7, -6, 1, 0, 1, 11, 9 };
	//search_index
	cout << "Позиция числа 7 в массиве = " << search_index(arr, size, 7) << '\n'; // 3
	cout << "Первая позиция числа 1 в массиве = " << search_index(arr, size, 1) << '\n'; //2

	if (search_index(arr, size, 10) == -1)
		cout << "Числа 10 нет в массиве\n";
	else
	cout << "Позиция числа 10 в массиве = " << search_index(arr, size, 10) << '\n'; //10 это ошибка, вводим return -1 чтоб увидеть ошибку


	cout << "Первая позиция числа 1 начиная с позиции 4 в массиве = " << search_index(arr, size, 1, 4) << '\n';

	//search_last_index
	cout << "Последняя позиция числа 7 в массиве = " << search_last_index(arr, size, 7) << '\n';
	cout << "Последняя позиция числа 1 в массиве = " << search_last_index(arr, size, 1) << '\n';
	cout << "Последняя позиция числа 1 начиная с позиции 4 в массиве = " << search_last_index(arr, size, 1, 4) << '\n';

	//Задание "Подслово"
	cout << "Изначальное слово: \n";
	const int letters = 8;
	char word[letters] = {'f', 'u', 'n','c', 't', 'i', 'o','n'};
	for (int i = 0; i < letters; i++)
		cout << word[i];
	cout << "\nПодслово:\n";
	subword(word, letters, 'n');

	return 0;
}