#include <iostream>
#include "cat.h"
#include "dog.h"
using namespace std;

int main(int argc, char *argv[])
{
    Dog dog;
    Cat cat;
    cout << dog.barking() << endl;
    cout << cat.barking() << endl;

    return 0;
}