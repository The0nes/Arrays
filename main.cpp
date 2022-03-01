#include<iostream>
using namespace std;
int num[10];

string friends[5];

int main() {
	bool  HasCoolFriend = false;
	cout << "enter 5 friends:" << endl;
	cin >> friends[0];
	cin >> friends[1];
	cin >> friends[2];
	cin >> friends[3];
	cin >> friends[4];
	
	for (int i = 0; i < 5; i++)
		cout << friends[i] << endl;
	
	for (int i = 0; i < 5; i++)
		if (friends[i] == "alejandro")
			HasCoolFriend = true;

	if (HasCoolFriend == true)
		cout << "you have cool friends!" << endl;
	else
		cout << "you need to talk to alejandro" << endl;
	for (int i = 0; i < 10; ++i) {
			int r = rand() % 51 + 50;
			num[i] = r;
	}
	for (int i = 0; i < 10; ++i)
		cout << num[i] << " ";
	for (int i = 0; i < 5; ++i)
		cout << friends[i] << " ";
}
