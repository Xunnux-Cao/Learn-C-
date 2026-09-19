#include <iostream>
using namespace std;

int main(){
    //字符串拼接的练习
    //定义一个变量存储用户的姓名，任何在屏幕上显示：“你好，”+姓名
    string name = "张三";
    cout << "你好，" + name << endl;

    //定义两个变量，分别存储用户的姓名和年龄，然后输出“xxx+yyy岁了”
    string name2 = "张三";
    int age = 18;
    cout << name2 + to_string(age) + "岁了" << endl;

    //当我们面试时，前台会要求我们填写个人信息，比如姓名，年龄，邮箱，家庭住址，期望工资。
    //请将这些信息输出
    string name3 = "张三";
    int age3 = 18;
    string email = "zhangsan@example.com";
    string address = "北京市海淀区";
    int salary = 5000;
    cout << "姓名：" + name3 << endl;
    cout << "年龄：" + to_string(age3) << endl;
    cout << "邮箱：" + email << endl;
    cout << "家庭住址：" + address << endl;
    cout << "期望工资：" + to_string(salary) + "元" << endl;

    //请输入用户名，年龄，班级，最后一起打印出来
    string username;
    int age4;
    string className;
    cout << "请输入用户名：";
    cin >> username;
    cout << "请输入年龄：";
    cin >> age4;
    cout << "请输入班级：";
    cin >> className;
    cout << "用户名：" + username << endl;
    cout << "年龄：" + to_string(age4) << endl;
    cout << "班级：" + className << endl;
    return 0;
}
