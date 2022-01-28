#include <iostream>
using namespace std;

class stats {
public:
	int health = 1;			// Здоровье
	int strenght = 1;		// Сила
	int dexterity = 1;		// Ловкость
	int intelligense = 1;	// Интеллект
	int luck = 1;			// Удача

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
	string first_action = "Точный удар";
	int damage_first_action;
	string second_action = "Сильный удар";
	int damage_second_action;
	string third_action = "Заклинание фаербола";
	int damage_third_action;
	string fourth_action = "Побег";
	int percent_luck;
};

class main_hero { // Главный класс
public:
	string name;
	stats hero;
	healthbar info;
	actions movement;

	main_hero() {
		cout << "Введите имя персонажа\nВвод: ";
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
	// Создание главного героя
	main_hero one;
	// Вывод данных о главном герое
	one.info.print();
	one.hero.print();
}