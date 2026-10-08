#include <iostream>
using namespace std;
int main(){
    /*try{
        //放可能会发生异常的代码
        //如果try中的代码抛出异常，会跳转到catch中执行
    }
    catch(const std::exception&){
        cout << "异常捕获：" << e << endl;
    }
    */
   try{
        string str;
        cin >> str;
        int a = stoi(str);
        cout << a <<endl;
   }
   catch(const std::exception&){
        cout << "异常捕获："<<endl;
   }
}
