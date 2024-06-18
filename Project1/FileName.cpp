#include <iostream>
#include <windows.h>
#include <vector>//контейнер, массив. ћассив!=вектор и наоборот;
#include <string.h>
/*void vector() {
	std::vector<int> one(20, 2);//создание пустого вектора;
	//(5)зпрпнее выдел€ем количесстово €чеек (не об€зательно);
	//(5,1) 5 €чеек, все равны единице;
	//std::vector <int> two{ 3,2,2 };//заполн€ем €чееки в {} скобках;
	int a = one.front();//возвращает первый элемент;
	int b = one.back();//возвращает последний элемент;
	int c = one[3];//четвертый элемент;
	one[0] = 5;//первый элемент равен 5, как в массиве;
	for (int i : one) {//i = 0. i будет автоматически индексом нашего вектора; пока вектор не кончилс€
		std::cout << i << " ";
	}
	std::cout << one.size();//возвращает размер вектора;
	std::cout << std::endl;
	std::cin >> a;
	//one.push_back(a);//добавить что то в конец массива,  ј  Ќќ¬џ… ЁЋ≈ћ≈Ќ“;
	//one.pop_back();//удал€ет последний элемент из вектора;
	//one.capacity();//показывает количество зарезервированных €чеек
	one.erase(one.begin(), one.begin() + 2);//вырезает от и до; begin - начало;
	one.erase(one.begin() + 4);//удал€ет конкретную €чейку
	//std::erase(one,7);//“ќЋ№ ќ Ќј 20 —“јЌƒј–“≈. удал€ет все элементы(в данном случае все 7)
	one.insert(one.begin() + 1, 69);//вставл€ет на нужную €чейку(в данном случае 69)
	one.insert(one.begin() + 1, 3, 71);//тоже самое но 3 раза
	for (int i : one) {//i = 0. i будет автоматически индексом нашего вектора; пока вектор не кончилс€
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
		size = strlen(world)+1;//длина строки
		this->world = new char[size];// = 		char* world = new char[size];this обращение к полю с этим неймингом (строка 53) 
		memcpy(this->world, world, size);
	}

	MyString operator+(MyString& other) {
		this->size = size + other.size+1;
		strcat_s(this->world, size, other.world);
		return world;
	}

	int size;
	char* world;//указатель на какую то €чейку;




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