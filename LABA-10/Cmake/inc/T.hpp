#pragma once
#include <iostream>
#include <vector>
#include <S.hpp>
using namespace std;
namespace mt {
	// класс, описывающий учителя
	class Teacher {
	private:
		string m_sname; // фамилия
		vector<Student*> m_students; // ученики
	public:
		// конструктор, принимающий фамилию
		Teacher(string sname);

		// деструктор
		~Teacher();

		// метод, который добавляет ученика на обучение к учителю 
		void add(Student* Student);

		// метод, который исключает ученика из группы учителя
		void remove(Student* Student);

		// метод, который выводит в консоль информацию
		void print();
	};
}