#include <iostream>
#include <windows.h>
#include <vector>//���������, ������. ������!=������ � ��������;
#include <string.h>
/*void vector() {
	std::vector<int> one(20, 2);//�������� ������� �������;
	//(5)������� �������� ������������ ����� (�� �����������);
	//(5,1) 5 �����, ��� ����� �������;
	//std::vector <int> two{ 3,2,2 };//��������� ������ � {} �������;
	int a = one.front();//���������� ������ �������;
	int b = one.back();//���������� ��������� �������;
	int c = one[3];//��������� �������;
	one[0] = 5;//������ ������� ����� 5, ��� � �������;
	for (int i : one) {//i = 0. i ����� ������������� �������� ������ �������; ���� ������ �� ��������
		std::cout << i << " ";
	}
	std::cout << one.size();//���������� ������ �������;
	std::cout << std::endl;
	std::cin >> a;
	//one.push_back(a);//�������� ��� �� � ����� �������, ��� ����� �������;
	//one.pop_back();//������� ��������� ������� �� �������;
	//one.capacity();//���������� ���������� ����������������� �����
	one.erase(one.begin(), one.begin() + 2);//�������� �� � ��; begin - ������;
	one.erase(one.begin() + 4);//������� ���������� ������
	//std::erase(one,7);//������ �� 20 ���������. ������� ��� ��������(� ������ ������ ��� 7)
	one.insert(one.begin() + 1, 69);//��������� �� ������ ������(� ������ ������ 69)
	one.insert(one.begin() + 1, 3, 71);//���� ����� �� 3 ����
	for (int i : one) {//i = 0. i ����� ������������� �������� ������ �������; ���� ������ �� ��������
		std::cout << i << " ";
	}
}
*/

class MyString {
public:
	MyString() {
		size = 80;
		char* world = new char[size];
	}
	MyString(int size) {
		int newSize = size;
		char* world = new char[newSize];

	}
	MyString(const char* world) {
		size = strlen(world)+1;//����� ������
		this->world = new char[size];// = 		char* world = new char[size];this ��������� � ���� � ���� ��������� (������ 53) 
		memcpy(this->world, world, size);
	}

	MyString operator+(MyString& other) {
		this->size = size + other.size+1;
		strcat_s(this->world, size, other.world);
		return world;
	}

	int size;
	char* world;//��������� �� ����� �� ������;




};



int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	MyString a;
	MyString b(5);
	MyString c("Hello");
	MyString d(" world");

	MyString z = c + d;
	std::cout << z.world;

	return 0;
}