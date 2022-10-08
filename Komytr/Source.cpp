#include<iostream>
using namespace std;

class Printer {
private:

public:

};

class Klava {
private:
	 
public:

};


class PC {
private:
	class HDD {
	public: 
		void hdd(){ 
		cout << "HDD - TOSHIBA" << endl;
		}
	};
	class RAM {
	public:
		void ram() {
			cout << "RAM - 16gb" << endl;
		}
	};
	class videoram {
	public:
		void videom() {
			cout << "Videoram - 6gb" << endl;
		}
	};
	class CPU {
	public:
		void cu() {
			cout << "CPU - Intel Core i7" << endl;
		}
	};


	HDD hddd;
	RAM raam;
	videoram vsideom;
	CPU cpu;

public:



	void pc() {
		hddd.hdd();
		raam.ram();
		vsideom.videom();
		cpu.cu();
	}



};

int main() {


	PC pc1;
	pc1.pc();

}