#include <iostream>
#include <ctime>

int main ()
{
    srand(time(0));
    int randomNum = (rand() % 5) + 1;
    std::string textPrefix = "You win";

    std::cout << "****** TEST YOUR LUCK ******" << '\n';

    switch (randomNum)
    {
        case 1: std::cout << textPrefix << " a bumper sticker!\n"; break;
        case 2: std::cout << textPrefix << " a t-shirt!\n"; break;
        case 3: std::cout << textPrefix << " a watch!\n"; break;
        case 4: std::cout << textPrefix << " a new laptop!\n"; break;
        case 5: std::cout << textPrefix << " a new car!\n"; break;
        default: std::cout<< "Better luck next time!" << '\n'; break;
    }

    std::cout << "**** Thanks For Using ****" << '\n';
return 0;
}