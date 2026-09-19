#include <iostream>
using namespace std;

/*
关系运算符的优先级低于算数运算符
关系运算符的作用是比较两个值的大小关系，返回值为bool类型
关系运算符有：<、>、<=、>=、==、!=；
*/

int main(){
    int a = 10;
    int b = 20;
    bool res = a < b;
    cout << res << endl; //输出为1，因为a小于b
    res = a+b < b-a;    //先计算，最后比较两个结果的大小关系
    cout << res << endl; //输出为1，因为a+b小于b-a

    //不能用于判断一个数值的范围
    //即这种方式：3 < a < 5。不可使用，因为会先计算a<5，再计算3<true，结果为false

    //string的比较只能使用==和!=运算符
    string str1 = "123";
    string str2 = "456";
    res = str1 == str2;
    cout << res << endl; //输出为0，因为str1不等于str2

    //无符号数和有符号数进行比较时，有符号数会被转换为无符号数进行比较
    unsigned int a1 = 10;
    res = a1 == b;
    cout << res << endl; //输出为0，虽然a1等于b，但是a1是无符号数，所以会被转换为无符号数进行比较

    //char和bool可以和同类型的数据进行比较
    //char也可以进行数值比较，但是会把char根据ASCII码表转换为int进行比较
    char c = 'A';
    char c1 = 'B';
    res = c < c1;
    cout << res << endl; //输出为1，因为A小于B
    
    return 0;
}
