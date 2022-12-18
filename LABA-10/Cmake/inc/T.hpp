#pragma once
#include <iostream>
#include <vector>
#include <S.hpp>
using namespace std;
namespace mt {
	// �����, ����������� �������
	class Teacher {
	private:
		string m_sname; // �������
		vector<Student*> m_students; // �������
	public:
		// �����������, ����������� �������
		Teacher(string sname);

		// ����������
		~Teacher();

		// �����, ������� ��������� ������� �� �������� � ������� 
		void add(Student* Student);

		// �����, ������� ��������� ������� �� ������ �������
		void remove(Student* Student);

		// �����, ������� ������� � ������� ����������
		void print();
	};
}