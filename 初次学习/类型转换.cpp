#include <iostream>
#include <string>
using namespace std;
int main(){
    // 隐式转换
    // 说明：
    // 隐式转换是指在程序中，一个数据类型自动转换为另一个数据类型。
    // string类型不可以自动转换为其他类型
    //当在使用a=b时，若a与b的类型不同，会将右侧变量转换为左侧变量的类型。
    int i = 1;
    char c = 'A';
    short s = 55;
    bool b = true;
    i = c;
    cout << i << endl;
    c = s;
    cout << c << endl;
    // 小类型转换为大类型，如int与double计算时，会将int转换为double类型
    double d = i + 1.1;
    cout << d << endl;

    //显示转换
    //手动处理，强制转换
    //括号转换
    //变量类型 变量名 = (变量类型)表达式;
    //在计算中强制改变隐式转换的规则
    int a = (int)1.5;
    cout << a << endl;
    a = (int)(1.5 + 0.5 + 1.2);
    cout << a << endl;
    //其他类型转字符串 to_string()
    //此方法需要引用头文件<string>
    //std::to_string()
    //此方法没有明确支持 short bool char 相关变量（但仍然可以使用，因为会先进行隐式转换）
    string str = to_string(a);
    cout << str << endl;

    //stoxx方法，将字符串转换为其他类型变量
    //此方法需要引用头文件<string>
    //std::stoxx()
    string str2 = "123";
    int a2 = stoi(str2);
    cout << a2 << endl;
    //1.字符串转int stoi()
    //2.字符串转double stod()
    //3.字符串转float stof()
    //4.字符串转long long stoll()
    //5.字符串转unsigned long long stoul()
    //6.字符串转unsigned int stoi()

    //转换失败会报错
    //如 溢出 和 类型不匹配
    return 0;
} 
