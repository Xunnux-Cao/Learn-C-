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

        //自增自减
    //自增：先使用，后增加
    cout << a++ << endl;
    //自增：先增加，后使用
    cout << ++a << endl;
    //自减：先减少，后使用
    cout << a-- << endl;
    //自减：先减少，后使用
    cout << --a << endl;

    //数据类型不同的变量计算
    //计算时会取最高的数据类型，以确保数据精度不会损失
    float c =10.5f; //浮点型的值为10.5
    char d = 'a';   //字符型的值为97
    bool e = true; //布尔型的值为1
    cout << c + d + e << endl;
    //计算时会先将字符型转换为浮点型，再进行计算
    //计算结为108.5=10.5+1+97;
    return 0;
}
