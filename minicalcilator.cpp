// LessonGeminiThree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Привет мир!\n";
    /* Задание: 7 */
    /*
    Калькулятор (мини): Создай три переменные: double n1, double n2 и int operation (1 — плюс, 2 — минус, 3 — умножить, 4 — делить). 
    Напиши логику, которая выполняет нужное действие в зависимости от operation и выводит результат. Добавь проверку: если 
    operation равен 4, а n2 равен 0, выведи ошибку "Делить на ноль нельзя!".
    */

    double n1 = 3.14;
    double n2 = 0;

    int operation = 4;
    std::string numberQuestSeven = "Задание 7: ";

    if (operation == 1) {
        int result = n1 + n2;
        std::cout << numberQuestSeven  << result << "\n" << std::endl;
    } else if (operation == 2) {
        int result = n1 - n2;
        std::cout << numberQuestSeven << result << std::endl;
    } else if (operation == 3) {
        int result = n1 * n2;
        std::cout << numberQuestSeven << result << std::endl;
    } else if (operation == 4) {
        if (n2 == 0) {
            std::cout << numberQuestSeven << "Делить на ноль нельзя!\n" << std::endl;
        } else {
            int result = n2 / n1;
            std::cout << numberQuestSeven << result << std::endl;
        }
    }

