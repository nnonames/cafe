#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

namespace CafeMenu {
	class CafeMenu
	{
	private:

	public:
		CafeMenu() {  }
		~CafeMenu() {  }
		string code = "X";
		string name = "NaN";
		double price = 0.0;
		string size = "NaN";

		CafeMenu(string code, string name, string size, double price);
		string ReturnMenu();
		void ShowMenu();
		void ShowMenu(int num);
	};
}