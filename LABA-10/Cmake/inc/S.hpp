#pragma once
#include <iostream>
using namespace std;
namespace mt {
	// класс, описывающий ученика
	class Student {
	private:
		static size_t countfr; // количество учеников
		string m_sname; // фамилия
		size_t m_lkcode; // код личного кабинета ученика
		size_t m_position; // позиция ученика (для вывода)
	public:
		// конструктор, принимающий фамилию и код личного кабинета ученика
		Student(string sname, size_t k);

		// деструктор
		~Student();

		// метод, который выводит в консоль информацию
		void print();

		// метод, возвращающий код личного кабинета ученика
		size_t getId();
	};
}
