#pragma once
#include "CafeMenu.h"

#define MAXLIST 12

namespace Cafe {

	class Cafe : public CafeMenu::CafeMenu
	{
	private:

	public:
		Cafe() { }
		~Cafe() { }
		bool CheckOrder(string productcode);
		void MenuList(int num);
		void CallMenu();
	};
}