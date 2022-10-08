#include<iostream>
using namespace std;

class Printer {
 

public:
	void rint() {
		cout << "Printer - Asus" << endl;
	}
};

class Klava {
 
	 
public:
	void klav() {
		cout << "Klava - Koka" << endl;
	}
};


class PC {//компо3иция,обьекты привя3аны дрyг к дрyгy. 
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
	Klava klv;
	Printer prnt;

public:



	void pc() {
		hddd.hdd();
		raam.ram();
		vsideom.videom();
		cpu.cu();
	}
	void klvrnt() {
		  klv.klav();
		  prnt.rint();
	 }


};

int main() {


	PC pc1;
	pc1.pc();//компо3иция
	pc1.klvrnt();//агрегация
}