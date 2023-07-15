

#include<Windows.h>
#include <iostream>

using namespace std;


//функция для апдейта баланса
void upDateBalance(int&balance,int bet,bool playerWins) {

    if (playerWins) {
        balance += bet - 1000;
    }
    else {
        balance -= 1000;
    }
    cout << "Ваш текущий балансе:" << balance << endl;

}





// Функция для отображения анимации вращения барабана
void animateSpin() {
    const int size = 10;

    for (int i = 0; i < size; i++) {
        system("cls");
        std::cout << "Спин..." << std::endl;
        Sleep(1000);
        break;
    }
       
}

  
int SelectionBalance() {

    cout << "Добро пожаловать в игру One-armed Bandit!" << endl;
   
    int balance = 0;
    while(balance<1000){
        cout << "Введите свой банк(минимум 1000)" << endl;
    cin >> balance;

    if (balance > 1000) {
        cout << "Let's start  the game One-armed Bandit" << endl;
    }
    }
    
        return balance;
}
int printCard(char a)
{
    switch (a)
    {
    case 'A':    return 50000; break;
    case'K':    return 15000; break;
    case 'J':    return 2000; break;
    case 'Q':    return 5000; break;
    case 'Ю':   return 1000; break;
    case '8':    return 200; break;
    case '9':    return 500; break;
    case '7':    return 100; break;
    case '6':    return 50; break;
    default: return 0;

    }

}
// Функция для игры в однорукого бандита
void playSlotMachine(int bal)
{
        cout << "Нажмите Enter, чтобы крутить барабан, или 'Q' для выхода." << endl;
        cin.ignore();//очистка входного буфера
    int balance = bal;

   
   
 
    while (true) {
        char input;
        cin.get(input);




        if (input == 'q' || input == 'Q') {
            std::cout << "Спасибо за игру! До свидания!" << std::endl;
            break;
        }
        animateSpin();

        char section[9] = { 'A','K','Q','J','Ю','7','6','8','9' };

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
        cout << "|     |" << section1 << "    " << "      " << section2 << "            " << section3 << " |" << "        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|     |                          |        |" << endl;
        cout << "|_____|__________________________|________|" << endl;

        int c = 0;


        if (section1 == section2 && section1 == section3) {
            std::cout << "Поздравляем! Вы выиграли JackPot!" << endl;

            c = printCard(section1);
            c * 10;
            cout << "Ваш выигрыш :" << c << endl;
            upDateBalance(balance, c, true);
        }
        else if (section1 == section2 || section1 == section3 || section2 == section3) {
            cout << "Поздравляем! Вы выиграли !" << endl;
            if (section1 == section2 || section1 == section3)
            {

                c = printCard(section1);
                cout << "Ваш выигрыш :" << c << endl;
                upDateBalance(balance, c, true);
            }
            else
            {

                c = printCard(section2);
                cout << "Ваш выигрыш :" << c << endl;
                upDateBalance(balance, c, true);
            }

        }

        else {
            cout << "Увы, попробуйте еще раз." << endl;
            upDateBalance(balance, c, false);
        }
        while (balance < 1000) {
            cout << "Пополните баланс,ваш текущий баланса :" << endl;
            cin >> balance;
            upDateBalance(balance, c, false);

        }




    }
}

int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); // Инициализация генератора случайных чисел
    int bal = SelectionBalance();
    
    playSlotMachine(bal); // Запуск игры


    return 0;
}










