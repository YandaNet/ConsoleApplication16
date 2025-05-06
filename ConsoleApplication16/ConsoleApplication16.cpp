

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//void write(string& file, string text) {
//	fstream obj;
//	obj.open(file, ios::out);
//	obj << text << endl;
//	obj.close();
//}
//
//
//void read(string& file) {
//	fstream obj;
//
//	obj.open(file, ios::in);
//	if (obj.is_open()) {
//		string txt;
//		while (getline(obj, txt)) {
//			cout << txt;
//		}
//		obj.close();
//	}
//	else {
//		cout << "OOPS I DID AGAIN" << endl;
//	}
//}







void easy(string nameFile) {
	fstream obj;
	obj.open(nameFile, ios::out);
	for (int i = 0; i < 10; i++)
	{
		obj << rand() % 10 + 1;
	}

}



struct student {
private:
	string name;
	int age;
	bool lovecplucpluc;
public:
	student(string name_, int _age, bool _cplusplus) {
		name = name_;
		age = _age;
		lovecplucpluc = _cplusplus;
	}

	string get_name() {
		return name;
	}
	void set_name(string _name) {
		name = _name;
	}

	int get_age() {
		return age;
	}
	void set_age(int _age) {
		age = _age;
	}

	bool get_love() {
		return lovecplucpluc;
	}
	void set_love(bool _love) {
		lovecplucpluc = _love;
	}
};




int main()
{
	string nameFile = "newTXT.txt";
	easy(nameFile);
	student std1("max", 15, true);

	fstream obj;
	obj.open(nameFile, ios::out);
	if (obj.is_open()) {
		obj << std1.get_name() << endl;
		obj.close();
	}
	else {
		cout << "ERROR" << endl;
	}
}

