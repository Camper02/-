
#include <T.hpp>
using namespace std;

namespace mt {
    size_t Student::countfr(0);

    Student::Student(string sname, size_t lkcode) : m_sname(sname), m_lkcode(lkcode), m_position(Student::countfr++) {
        cout << "Вызван <<конструктор>> ученика " << m_sname << endl;
    }

    Student::~Student() {
        cout << "Вызван <<деструктор>> ученика " << m_sname << endl;
    }

    void Student::print() {
        cout
            << "Фамилия - "
            << m_sname
            << endl
            << "Код ЛК - "
            << m_lkcode << endl;
    }

    size_t Student::getId() {
        return m_position;
    }
}
