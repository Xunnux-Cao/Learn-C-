#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    //加法
    cout << a + b << endl;
    //减法
    cout << a - b << endl;
    //乘法
    cout << a * b << endl;
    //除法
    cout << a / b << endl;
    //取余
    cout << a % b << endl;
    //计算时先乘除后加减，相同优先级的运算符从左到右计算
    //有空格时，先计算括号中的表达式，再计算括号外的表达式
    return 0;
}
