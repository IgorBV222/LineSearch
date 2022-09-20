//������
#include <iostream>
using namespace std;

//�������� ����� ������� ��������� �������� value � ������ arr. ����� ���������� � ������� begin (�� ��������� 0)
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

//�������� ����� ���������� ��������� �������� value � ������ arr. 
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ���������� ��������� �������� value � ������ arr. ����� ���������� � ������� begin.
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//����� �������� � ������� ������� sym
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
	cout << "������� ����� 7 � ������� = " << search_index(arr, size, 7) << '\n'; // 3
	cout << "������ ������� ����� 1 � ������� = " << search_index(arr, size, 1) << '\n'; //2

	if (search_index(arr, size, 10) == -1)
		cout << "����� 10 ��� � �������\n";
	else
	cout << "������� ����� 10 � ������� = " << search_index(arr, size, 10) << '\n'; //10 ��� ������, ������ return -1 ���� ������� ������


	cout << "������ ������� ����� 1 ������� � ������� 4 � ������� = " << search_index(arr, size, 1, 4) << '\n';

	//search_last_index
	cout << "��������� ������� ����� 7 � ������� = " << search_last_index(arr, size, 7) << '\n';
	cout << "��������� ������� ����� 1 � ������� = " << search_last_index(arr, size, 1) << '\n';
	cout << "��������� ������� ����� 1 ������� � ������� 4 � ������� = " << search_last_index(arr, size, 1, 4) << '\n';

	//������� "��������"
	cout << "����������� �����: \n";
	const int letters = 8;
	char word[letters] = {'f', 'u', 'n','c', 't', 'i', 'o','n'};
	for (int i = 0; i < letters; i++)
		cout << word[i];
	cout << "\n��������:\n";
	subword(word, letters, 'n');

	return 0;
}