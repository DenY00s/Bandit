#include <iostream>
#include <cstdlib>
#include <ctime>
#include<Windows.h>
using namespace std;

// Функция для очистки консоли
void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

// Функция для отображения анимации вращения барабана
void animateSpin() {
    const int numFrames = 10; // Количество кадров анимации
    const int frameDelay = 100000; // Задержка между кадрами (в микросекундах)

    for (int i = 0; i < numFrames; i++) {
        clearScreen();
        std::cout << "Спин..." << std::endl;

        // Генерация случайных символов для каждой секции барабана
        char section1 = rand() % 5 + 'A';
        char section2 = rand() % 5 + 'A';
        char section3 = rand() % 5 + 'A';

        std::cout << " " << section1 << " | " << section2 << " | " << section3 << std::endl;

       /* usleep(frameDelay);*/ // Задержка между кадрами
        Sleep(1000);
        break;
    } 
}

// Функция для игры в однорукого бандита
void playSlotMachine() {
    std::cout << "Добро пожаловать в игру \"Однорукий бандит\"!" << std::endl;

    while (true) {
        std::cout << std::endl;
        std::cout << "Нажмите Enter, чтобы крутить барабан, или 'Q' для выхода." << std::endl;

        char input;
        std::cin.get(input);

        if (input == 'q' || input == 'Q') {
            std::cout << "Спасибо за игру! До свидания!" << std::endl;
            break;
        }

        animateSpin();

        // Генерация случайных символов для каждой секции барабана после анимации
        char section1 = rand() % 3 + 'A';
        char section2 = rand() % 3 + 'A';
        char section3 = rand() % 3 + 'A';

        std::cout << std::endl;
        std::cout << " " << section1 << " | " << section2 << " | " << section3 << std::endl;

        if (section1 == section2 && section2 == section3) {
            std::cout << "Поздравляем! Вы выиграли!" << std::endl;
        }
        else {
            std::cout << "Увы, попробуйте еще раз." << std::endl;
        }
    }
}

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    setlocale(0, "");
    playSlotMachine(); // Запуск игры

    cout << "___________________________________________" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|     |                          |        |" << endl;
    cout << "|_____|__________________________|________|" << endl;
 
    
    return 0;
}
























//
//#include <iostream>
//#include<vector>
//#include<string>
//using namespace std;
//static  int balance = 1000;
//
//
//int UpValueSpin() {
//	int up;
//switch (true)
//{
//case'20':20; return 20; break;
//
//
//}
//
//
//}
//
//bool isGameOver() {
//
//	if ((balance == 0)||balance<0)
//	{
//		cout << "You Lose\n";
//	}
//	else {
//		cout<<"Try again\n";
//	}
//	return true;
//}
//int main()
//{
//	vector<char> sym = { 'V','7','A'};
//	vector<char> sym2 = { 'V','7','A' };
//	vector<char> sym3= { 'V','7','A' };
//	setlocale(LC_ALL, "");
//	cout << "Однорукий бандит" << endl;
//	cout << "Ваш баланс:" << balance << endl;
//	isGameOver();
//
//}

