#pragma once
#include <iostream>
using namespace std;
namespace mt {
	// �����, ����������� �������
	class Student {
	private:
		static size_t countfr; // ���������� ��������
		string m_sname; // �������
		size_t m_lkcode; // ��� ������� �������� �������
		size_t m_position; // ������� ������� (��� ������)
	public:
		// �����������, ����������� ������� � ��� ������� �������� �������
		Student(string sname, size_t k);

		// ����������
		~Student();

		// �����, ������� ������� � ������� ����������
		void print();

		// �����, ������������ ��� ������� �������� �������
		size_t getId();
	};
}
