#include <iostream>
using namespace std;

class stats {
public:
	int health = 1;			// ��������
	int strenght = 1;		// ����
	int dexterity = 1;		// ��������
	int intelligense = 1;	// ���������
	int luck = 1;			// �����

	void print() {
		cout << "Stats:\nHealth = " << health << endl << "Strenght = " << strenght << endl << "Dexterity = " << dexterity << endl << "Intelligense = " << intelligense << endl << "luck = " << luck << endl << endl;
	}
};

class healthbar {
public:
	int health;
	int mana;
	void print() { cout << "Health = " << health << endl << "Mana = " << mana << endl << endl; }
};

class actions {
public:
	string first_action = "������ ����";
	int damage_first_action;
	string second_action = "������� ����";
	int damage_second_action;
	string third_action = "���������� ��������";
	int damage_third_action;
	string fourth_action = "�����";
	int percent_luck;
};

class main_hero { // ������� �����
public:
	string name;
	stats hero;
	healthbar info;
	actions movement;

	main_hero() {
		cout << "������� ��� ���������\n����: ";
		cin >> name;
		cout << endl;

		info.health = 20 + (5 * hero.health);
		info.mana = 15 + (2 * hero.intelligense);

		movement.damage_first_action = 7 + (3 * hero.dexterity);
		movement.damage_second_action = 7 + (3 * hero.strenght);
		movement.damage_third_action = 10 + (5 * hero.intelligense);
		movement.percent_luck = 3 + (2 * hero.luck);
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	// �������� �������� �����
	main_hero one;
	// ����� ������ � ������� �����
	one.info.print();
	one.hero.print();
}