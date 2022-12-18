#include <iostream>
#include <T.hpp>
#include <S.hpp>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	mt::Teacher* Teacher = new mt::Teacher("�������� ������");
	mt::Student* Student1 = new mt::Student("���������", 94675451);
	mt::Student* Student2 = new mt::Student("���", 94654591);
	mt::Student* Student3 = new mt::Student("������", 96385752);
	mt::Student* Student4 = new mt::Student("������", 96885883);
	mt::Student* Student5 = new mt::Student("��������", 77987751);

	Teacher->add(Student1);
	Teacher->add(Student2);
	Teacher->add(Student3);
	Teacher->add(Student4);
	Teacher->add(Student5);

	Teacher->print();

	delete Teacher;
}
