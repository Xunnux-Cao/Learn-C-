#include <iostream>
using namespace std;
// 三目运算符
// 语法：
// 条件表达式 ? 表达式1 : 表达式2
// 说明：
// 三目运算符是一种特殊的运算符，它有三个操作数，一个条件表达式，两个表达式。
// 当条件表达式为true时，三目运算符的值为表达式1的值；当条件表达式为false时，三目运算符的值为表达式2的值。
int main(){
    string str = true ? "是" : "否";
    string str1 = false ? "是" : "否";
    cout << str << endl;
    cout << str1 << endl;
    double d = 4 < 1 ? 1 : 2;
    cout << d << endl;
    // 三目运算符不会执行未被使用的表达式
    int i = 1;
    int i1 = true ? i : ++i;
    cout << i << endl;

    int x = 5, y = 10;
    (x < y ? x : y) = 6;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
