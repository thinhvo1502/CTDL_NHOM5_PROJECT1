#include<iostream>
#include <fstream>
using namespace std;
struct Admin {
	string user, pass;
};
void DangNhapAdmin() {
	string user, pass;
	cout << "\n\t\t\t\t\t\t*****************************\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t*\tDANG NHAP ADMIN\t*\n";
	cout << endl;
	cout << "\t\t\t\t\t\t*****************************\n\n";
	cout << "\t\t\t\t\t\tUser: \t\t";
	cin >> user;
	cout << endl;
	cout << "\t\t\t\t\t\tPin: \t\t";
	cin >> pass;
}
Admin adminList[3];
void ReadfromAdmin() {
	ifstream ifile("Admin.txt");
	string tmp;
	int i = 0, j=0;
	while (ifile >> tmp) {
		if (i % 2 == 0) {
			j = i / 2;
			adminList[j].user = tmp;
		}
		else adminList[j].pass = tmp;
		++i;
	}
}

int main() {
	cout << "\t\t\t\tCHAO MUNG DEN CHUONG TRINH MO PHONG HOAT DONG CUA MAY ATM\n\n";
	cout << "\t\t\t\t\t\t1.Admin\n\n";
	cout << "\t\t\t\t\t\t2.User\n\n";
	cout << "\t\t\t\tMoi ban nhap lua chon: ";
	int lc;
	cin >> lc;
	if (lc == 1) {
		ReadfromAdmin();
		for (int i = 0; i < 3; i++) {
			cout << adminList[i].user << " " << adminList[i].pass << endl;
		}
		/*DangNhapAdmin();*/
	}
	return 0;
}