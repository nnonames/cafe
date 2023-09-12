#include "main.h"

int CheckCoffeeCode(vector <Cafe::Cafe> vecname, string strB) {
	for (int i = 0; ;) {
		if (vecname[i].code == strB) { return i; }
		else if (i == vecmax - 1) { return -1; }
		i++;

	}
}

int main() {

	coffee[0].code = "1", coffee[0].name = "아메리카노", coffee[0].size = "Short", coffee[0].price = 3.6;
	coffee[1].code = "2", coffee[1].name = "아메리카노", coffee[1].size = "Tall", coffee[1].price = 4.1;
	coffee[2].code = "3", coffee[2].name = "라떼", coffee[2].size = "Short", coffee[2].price = 4.1;
	coffee[3].code = "4", coffee[3].name = "라떼", coffee[3].size = "Tall", coffee[3].price = 4.6;
	coffee[4].code = "5", coffee[4].name = "카푸치노", coffee[4].size = "Short", coffee[4].price = 4.1;
	coffee[5].code = "6", coffee[5].name = "카푸치노", coffee[5].size = "Tall", coffee[5].price = 4.6;
	coffee[6].code = "7", coffee[6].name = "카페모카", coffee[6].size = "Short", coffee[6].price = 4.1;
	coffee[7].code = "8", coffee[7].name = "카페모카", coffee[7].size = "Tall", coffee[7].price = 3.6;
	coffee[8].code = "9", coffee[8].name = "카라멜마끼아또", coffee[8].size = "Short", coffee[8].price = 5.1;
	coffee[9].code = "10", coffee[9].name = "카라멜마끼아또", coffee[9].size = "Tall", coffee[9].price = 5.6;
	coffee[10].code = "11", coffee[10].name = "돌체라떼", coffee[10].size = "Short", coffee[10].price = 5.1;
	coffee[11].code = "12", coffee[11].name = "돌체라떼", coffee[11].size = "Tall", coffee[11].price = 5.6;

	while (true) {

		for (int i = 0; ; i++) {
			if (i == 12) { break; }
			coffee[i].CafeMenu::CafeMenu::ShowMenu();
		} // CafeMenu에서 메뉴 표시

		cout << "==================== CAFE MENU LIST ====================" << endl;

		int menuNum = 1;
		for (int i = 0; ; i++) {
			if (i == 12) { break; }
			coffee[i].Cafe::Cafe::MenuList(menuNum);
			menuNum++;
		} // Cafe에서 메뉴 표시

		cout << endl << "주문을 계속하시려면 아무키나 누르세요 (대신 종료는 Q 또는 q)... >> : ";
		cin.get(answer);

		if (answer == 'q' || answer == 'Q') { return 0; }
		cin.clear();
		cout << endl << "상품을 선택하세요... >> : ";

		for (int i = 0; ;) {
			getline(cin, tempstr);
			stringstream splitstr(tempstr);

			if (tempstr.empty()) { break; }
			else if (tempstr == "q" || tempstr == "Q") { return 0; }
			else {
				cout << "선택 된 상품 : ";
				while (splitstr >> selectmenu[i]) {
					if (i >= 12) {
						cout << endl << "12개 이상은 불가능합니다..." << endl;
						break;
					}
					cout << selectmenu[i] << " ";;
					//if (selectmenu[i] != "\n") { cout << ", "; }
					i++;
				}
				if (selectmenu[i] == "\0") { break; }
			}
		}

		cout << endl <<"======= 주문하신 상품 =======" << endl << endl;

		for (int i = 0; ; ) {
			if (selectmenu[i].empty()) {
				cout << "Total : " << setw(19) << right << totalamo << "원" << endl;
				break; }
			for (int j = 0; ;) {
				if (j >= 12) { break; }
				j = CheckCoffeeCode(coffee, selectmenu[i]);
				if (j != -1) {
					coffee[j].Cafe::Cafe::CallMenu();
					totalamo = totalamo + coffee[j].price;
					break;
				}
				else {
					cout << selectmenu[i] << "는 없는 코드" << endl;
					break;
				}
				j++;
			}
			i++;
		}
		cout << endl << "==============================" << endl;
	}
}