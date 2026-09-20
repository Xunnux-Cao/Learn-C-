#include <iostream>
using namespace std;


int main(){

    //逻辑运算符
    //对两个布尔值进行逻辑运算
    //&& 与（同真为1）
    //|| 或（一真为1）
    //！非（取反）（0变1，1变0）
    int a = 10;
    int b = 20;
    cout << "a&&b=" << (a && b) << endl;
    cout << "a||b=" << (a || b) << endl;
    cout << "!a=" << (!a) << endl;
    //在判断时，只要数值不为0，都会被判断为true

    //优先级：！>&&>||
    return 0;
}