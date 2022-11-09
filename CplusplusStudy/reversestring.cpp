#include <iostream>
#include <string.h>
using std::cout; using std::cin; using std::endl;

int main()
{
    char nome[] = "batata";

    for (int i = strlen(nome) - 1; i >= 0; i--)
    {
        cout << nome[i] << endl;
    }
}
