#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
class ConsoleCP
{
    int oldin;
    int oldout;

public:
    ConsoleCP(int cp)
    {
        oldin = GetConsoleCP();
        oldout = GetConsoleOutputCP();
        SetConsoleCP(cp);
        SetConsoleOutputCP(cp);
    }

    // поскольку мы изменили свойства внешнего объекта — консоли, нам нужно
    // вернуть всё как было (если программа вылетит, пользователю не повезло)
    ~ConsoleCP()
    {
        SetConsoleCP(oldin);
        SetConsoleOutputCP(oldout);
    }
};

// и в программе:    
int main(int argc, char* argv[])
{
    ConsoleCP cp(1251);
// начинай писать код:
    
   int str = 115

    return 0;
}

