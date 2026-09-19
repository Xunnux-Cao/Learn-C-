#include <iostream>
using namespace std;
int main()
{
    //定义一个变量存储年龄，计算十年后的年龄
    int age;
    cout << "请输入年龄：";
    cin >> age;
    cout << "十年后您的年龄是：" << age + 10 << endl;
    
    //计算圆的面积和周长
    double r;
    cout << "请输入圆的半径：";
    cin >> r;
    cout << "圆的面积是：" << 3.14 * r * r << endl;
    cout << "圆的周长是：" << 2 * 3.14 * r << endl;

    //计算你C++，UE，Unity的总成绩和平均成绩
    double fenshu_c,fenshu_UE,fenshu_Unity;
    cout << "请分别输入输入C++，UE，Unity的分数：";
    cin >> fenshu_c >> fenshu_UE >> fenshu_Unity;
    cout << "您的总成绩是：" << fenshu_c + fenshu_UE + fenshu_Unity << endl;
    cout << "您的平均成绩是：" << (fenshu_c + fenshu_UE + fenshu_Unity) / 3 << endl;

    //商店T桖的价格为285元/件，裤子的价格为720元/件，小李买了2件T桖和3件裤子，问他需要支付多少元？打3.8折之后呢？
    double price_tshirt = 285;
    double price_pants = 720;
    double num_tshirt = 2;
    double num_pants = 3;
    double total_price = num_tshirt * price_tshirt + num_pants * price_pants;
    cout << "小李需要支付的总金额是：" << total_price << endl;
    cout << "小李需要支付的总金额（3.8折）是：" << total_price * 0.38 << endl;

    //a=99,b=87,请写出两种方法交换他们的值
    int a = 99;
    int b = 87;
    //方法1：使用临时变量
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << ",b=" << b << endl;
    //方法2：使用加减法
    a += b; //a=a+b
    b -= a;
    b += a;
    a -= b;
    cout << "a=" << a << ",b=" << b << endl;

    //把987652秒转换成n天n时n分n秒;
    int seconds = 987652;
    int day = seconds / (24 * 60 * 60);
    int hour = (seconds / 3600) - day * 24;
    int min = (seconds / 60) - hour * 60 - day * 24 * 60;
    int sec = seconds % 60;
    cout << "987652秒转换成n天n时n分n秒为：" << day << "天" << hour << "时" << min << "分" << sec << "秒" << endl;
    return 0;
}
