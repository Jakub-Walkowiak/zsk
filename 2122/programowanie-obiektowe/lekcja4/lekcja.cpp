#include <iostream>
using namespace std;

class School {
	public: 
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string lastName;
		
		static string s_getSchool();
		static void s_setSchool(string pSchool);
		
		void getData();
		void setFullName(string p_name, string p_lastName);
};

string School::s_school = "ZSK";
string School::s_jobPosition = "Uczeñ";

string School::s_getSchool() {
	return School::s_school;
}

void School::getData() {
	cout << "Imiê i nazwisko: " << name << " " << lastName;
}

void School::s_setSchool(string pSchool) {
	s_school = pSchool;	
}

void School::setFullName(string p_name, string p_lastName) {
	name = p_name;
	lastName = p_lastName;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	School albert;
	albert.setFullName("Albert", "Dyñski");
	
	cout << School::s_school << "\n" << School::s_jobPosition << "\n";
	albert.getData();
	
	// School::s_jobPosition = "Nauczyciel";
	albert.s_jobPosition = "Dyrektor";
	cout << "\n" << School::s_jobPosition;
	
	albert.School::s_setSchool("ZS£");
	cout << "\n" << School::s_getSchool();
}
