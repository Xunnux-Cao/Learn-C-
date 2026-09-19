//字符串拼接的学习
#include <iostream>
using namespace std;

int main(){
    //用+(+=)号拼接字符串(运算符中只能用+进行拼接)
    string str1 = "123";
    str1 += "456";
    cout << str1 << endl;
    char c = 'A';   //在char中，字符要用单引号'';
    str1 += c;
    cout << str1 << endl;
    //下面方法尽量不用，会将c+'A'进行加法运算
    string str2 = "789";
    str2 += c  + 'Q';
    cout << str2 << endl;
    cout << (int)(c + 'A') << endl; //就会像这样

    //利用string中的.append()方法拼接字符串
    str2.append("789");
    cout << str2 << endl;
    return 0;
}
