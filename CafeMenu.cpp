#include "CafeMenu.h"

namespace CafeMenu {

	CafeMenu::CafeMenu(string code, string name, string size, double price) {
		this->code = code;
		this->name = name;
		this->price = price;
		this->size = size;
	}

	void CafeMenu::ShowMenu() {
		cout << setw(30) << left << this->name;
		cout << setw(7) << right << this->size;
		cout << setw(12) << right << this->price << "¿ø" << endl;
	}

	void CafeMenu::ShowMenu(int num) {
		cout << "[" << setw(2) << num << "]" <<  " ";
		cout << setw(29) << left << this->name;
		cout << setw(5) << right << this->size << setw(1) << " ";
		cout << setw(12) << right << this->price << "¿ø" << endl;
	}
}