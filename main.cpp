#include "main.h"

int CheckCoffeeCode(vector <Cafe::Cafe> vecname, string strB) {
	for (int i = 0; ;) {
		if (vecname[i].code == strB) { return i; }
		else if (i == vecmax - 1) { return -1; }
		i++;

	}
}

int main() {

	coffee[0].code = "1", coffee[0].name = "�Ƹ޸�ī��", coffee[0].size = "Short", coffee[0].price = 3.6;
	coffee[1].code = "2", coffee[1].name = "�Ƹ޸�ī��", coffee[1].size = "Tall", coffee[1].price = 4.1;
	coffee[2].code = "3", coffee[2].name = "��", coffee[2].size = "Short", coffee[2].price = 4.1;
	coffee[3].code = "4", coffee[3].name = "��", coffee[3].size = "Tall", coffee[3].price = 4.6;
	coffee[4].code = "5", coffee[4].name = "īǪġ��", coffee[4].size = "Short", coffee[4].price = 4.1;
	coffee[5].code = "6", coffee[5].name = "īǪġ��", coffee[5].size = "Tall", coffee[5].price = 4.6;
	coffee[6].code = "7", coffee[6].name = "ī���ī", coffee[6].size = "Short", coffee[6].price = 4.1;
	coffee[7].code = "8", coffee[7].name = "ī���ī", coffee[7].size = "Tall", coffee[7].price = 3.6;
	coffee[8].code = "9", coffee[8].name = "ī��Ḷ���ƶ�", coffee[8].size = "Short", coffee[8].price = 5.1;
	coffee[9].code = "10", coffee[9].name = "ī��Ḷ���ƶ�", coffee[9].size = "Tall", coffee[9].price = 5.6;
	coffee[10].code = "11", coffee[10].name = "��ü��", coffee[10].size = "Short", coffee[10].price = 5.1;
	coffee[11].code = "12", coffee[11].name = "��ü��", coffee[11].size = "Tall", coffee[11].price = 5.6;

	while (true) {

		for (int i = 0; ; i++) {
			if (i == 12) { break; }
			coffee[i].CafeMenu::CafeMenu::ShowMenu();
		} // CafeMenu���� �޴� ǥ��

		cout << "==================== CAFE MENU LIST ====================" << endl;

		int menuNum = 1;
		for (int i = 0; ; i++) {
			if (i == 12) { break; }
			coffee[i].Cafe::Cafe::MenuList(menuNum);
			menuNum++;
		} // Cafe���� �޴� ǥ��

		cout << endl << "�ֹ��� ����Ͻ÷��� �ƹ�Ű�� �������� (��� ����� Q �Ǵ� q)... >> : ";
		cin.get(answer);

		if (answer == 'q' || answer == 'Q') { return 0; }
		cin.clear();
		cout << endl << "��ǰ�� �����ϼ���... >> : ";

		for (int i = 0; ;) {
			getline(cin, tempstr);
			stringstream splitstr(tempstr);

			if (tempstr.empty()) { break; }
			else if (tempstr == "q" || tempstr == "Q") { return 0; }
			else {
				cout << "���� �� ��ǰ : ";
				while (splitstr >> selectmenu[i]) {
					if (i >= 12) {
						cout << endl << "12�� �̻��� �Ұ����մϴ�..." << endl;
						break;
					}
					cout << selectmenu[i] << " ";;
					//if (selectmenu[i] != "\n") { cout << ", "; }
					i++;
				}
				if (selectmenu[i] == "\0") { break; }
			}
		}

		cout << endl <<"======= �ֹ��Ͻ� ��ǰ =======" << endl << endl;

		for (int i = 0; ; ) {
			if (selectmenu[i].empty()) {
				cout << "Total : " << setw(19) << right << totalamo << "��" << endl;
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
					cout << selectmenu[i] << "�� ���� �ڵ�" << endl;
					break;
				}
				j++;
			}
			i++;
		}
		cout << endl << "==============================" << endl;
	}
}