#include <iostream>
#include <string>
#include "constant.h"
#include "Monster.h"
using namespace std;

int main(){
    cout << "Hello, my favourite number is " << FAV_NUM << endl;
    Monster monster;
    monster.sayHello();
    return 0;
}