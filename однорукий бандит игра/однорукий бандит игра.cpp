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
      /*  char section1 = rand() % 5 + 'A';
        char section2 = rand() % 5 + 'A';
        char section3 = rand() % 5 + 'A';

        std::cout << " " << section1 << " | " << section2 << " | " << section3 << std::endl;*/

       /* usleep(frameDelay);*/ // Задержка между кадрами
        Sleep(1000);
        break;
    } 
}
int printCard(char a)
{
    switch (true)
    {
    case 'A':    return 50000; break;
    case'K' :    return 15000; break;
    case 'J':    return 2000; break;
    case 'Q':    return 5000 ; break;
    case 'Ю':   return 1000; break;
    case '6':    return 50; break;
    case '7':    return 100; break;
    case '8':    return 200; break;
    case '9':    return 500; break;
 
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
       /* char section1[] = rand() % 3 + char(-90);
        char section2[] = rand() % 3 + char(-90);
        char section3[] = rand() % 3 + char(-90);*/
        char section[9] = { 'A','K','Q','J','Ю','7','6','8','9'};
       
        char section1 = section[rand() % 9];
        char section2 = section[rand() % 9];
        char section3 = section[rand() % 9];
        std::cout << endl;
        cout << "___________________________________________" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |" << section1<<"    " << "      " << section2 << "            " << section3 << " |" << "        |"<< endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|_____|__________________________|________|" << endl;

 
       /* std::cout << " " << section1 << " | " << section2 << " | " << section3 << std::endl;*/

        if (section1 == section2 && section1 == section3) {
            std::cout << "Поздравляем! Вы выиграли JackPot!" << endl;
            int c = 0;
            c = printCard(section1);
             c * 10;
             cout << "Ваш выигрышь :" << c << endl;
        }
        else if (section1 == section2 || section1 == section3|| section2== section3) {
            cout << "Поздравляем! Вы выиграли !" << endl;
        }
       
        else {
            cout << "Увы, попробуйте еще раз." << endl;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); // Инициализация генератора случайных чисел
    setlocale(0, "");
    playSlotMachine(); // Запуск игры

    
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

