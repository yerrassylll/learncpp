#include <iostream>
#include <string>

int main()
{
	
    setlocale(LC_ALL, "Russian");

    double n1 = 0;
    std::cout << "Введите число" << std::endl;
    std::cin >> n1;
    double n2 = 0;
    std::cin >> n2;
    std::cout << "Введите число" << std::endl;
    std::cout << "Выберите операцию, 1 +, 2 -, 3 *, 4 /" << std::endl;

    int operation = 0;
    std::cin >> operation;
    std::string numberQuestSeven = "Задание 7: ";

    if (operation == 1) {
        int result = n1 + n2;
        std::cout << numberQuestSeven << result << "\n" << std::endl;
    }
    else if (operation == 2) {
        int result = n1 - n2;
        std::cout << numberQuestSeven << result << std::endl;
    }
    else if (operation == 3) {
        int result = n1 * n2;
        std::cout << numberQuestSeven << result << std::endl;
    }
    else if (operation == 4) {
        if (n2 == 0) {
            std::cout << numberQuestSeven << "Делить на ноль нельзя!\n" << std::endl;
        }
        else {
            int result = n2 / n1;
            std::cout << numberQuestSeven << result << std::endl;
        }
    }

}
