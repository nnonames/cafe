#include "Cafe.h"

namespace Cafe {
	
	void Cafe::MenuList(int num) {
		CafeMenu::ShowMenu(num);
	}

	bool Cafe::CheckOrder(string productcode) {
		if (code == productcode) { return true;	}
		else { return false; }
	}

	void Cafe::CallMenu() {
		cout << setw(15) << left << this->name + ",";
		cout << setw(5) << right << this->size << ", ";
		cout << setw(5) << right << this->price << "¿ø" << endl;
	}
}	