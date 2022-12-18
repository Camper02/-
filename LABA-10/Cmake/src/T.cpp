#include <T.hpp>

using namespace std;
namespace mt {
    Teacher::Teacher(string sname) : m_sname(sname) {
        cout << "Вызван <<конструктор>> для учителя: " << m_sname << endl;
    }

    Teacher::~Teacher() {
        cout << "Вызван <<деструктор>> учителя: " << m_sname << endl;
    }

    void Teacher::add(Student* Student) {
        for (size_t i = 0; i < m_students.size(); i++) {
            if (m_students[i]->getId() == Student->getId()) {
                return;
            }
        }

        m_students.push_back(Student);
    }

    void Teacher::remove(Student* Student) {
        int index = -1;

        for (size_t i = 0; i < m_students.size(); i++) {
            if (m_students[i]->getId() == Student->getId()) {
                index = i;
                break;
            }
        }

        if (index >= 0) {
            m_students.erase(m_students.begin() + index);
        }
    }

    void Teacher::print() {
        cout << "*** Вывод информации о группе ***" << endl;
        cout << "Учитель: " << m_sname << endl;
        if (m_students.size() > 0) {
            cout << "Ученики: " << endl;
            for (size_t i = 0; i < m_students.size(); i++) {
                m_students[i]->print();

                for (size_t i = 0; i < 30; i++) {
                    cout << '_';
                }
                cout << endl;
            }
        }
        cout << "***" << endl;
    }
}