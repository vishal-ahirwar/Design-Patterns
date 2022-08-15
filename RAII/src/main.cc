#include <iostream>
#include <chrono>
namespace app
{
    void doGreetings();
};

int main()
{
    srand(time(0));

    app::doGreetings();
    return 0;
};

void app::doGreetings()
{
    const std::string greetingString[] = {
        "Good Morning!",
        "Good Evening!",
        "Good Night!",
        "Good Afternoon"};
    const int len{rand() % 4};
    std::cout << greetingString[len] << "\n";
};
