#include <iostream>
using namespace std;

//地图打印
void PrintMap(int map[5][5], int x, int y){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i== x && j == y){
                cout << "@ ";
                continue;
            }
            if(map[i][j] == 0){
                cout << ". ";
            }else if(map[i][j] == 1){
                cout << "! ";
            }else if(map[i][j] == 2){
                cout << "M ";
            }else if(map[i][j] == 3){
                cout << "O ";
            }else if(map[i][j] == 9){
                cout << "H ";
            }else if(map[i][j] == 8){
                cout << "K ";
            }
        }
        cout << endl;
    }
}
int main(){
    cout << "欢迎来到勇者地牢!" << endl;
    // 初始化玩家属性
    // HP: 玩家生命值
    // gold: 玩家获得的金币
    // potion: 玩家获得的药水数量
    double hp = 100;
    double gold = 0;
    int x = 0, y = 0;
    int potion = 0;
    int Key = 0;
    // 地图
    // 0: 普通房间
    // 1: 敌人房间
    // 2: 宝箱房间
    // 3: 药水房间
    // 9: 出口房间
    int map[5][5] = {{0, 2, 3, 8, 2},{0, 0, 1, 0, 0},{3, 1, 3, 3, 0},{0, 0, 1, 0, 3},{2, 0, 0, 0, 9}};
    // 游戏循环
    while(true){
        cout << "HP:" << hp << "  金币：" << gold << "  药水："<< potion << endl;
        // 打印地图
        PrintMap(map, x, y);
    // 玩家移动
    char input;
    cin >> input;
    if(input == 'w'){ 
        if(x > 0){
            x = x - 1;
        }
    }
    else if(input == 's'){ 
        if(x < 4){
            x = x + 1;
        }
    }
    else if(input == 'a'){ 
        if(y > 0){
            y = y - 1;
        }
    }
    else if(input == 'd'){ 
        if(y < 4){
            y = y + 1;
        }
    }
    else if(input == 'q'){
        if(potion > 0){
            hp += 10;
            potion -= 1;
        }
        else{
            cout << "你没有药水了！" << endl;
        }
    }
    if (map[x][y] == 2){
        cout << "你发现了一个宝箱，获得100金币！" << endl;
        gold += 100;
        map[x][y] = 0;
    }
    else if (map[x][y] == 3 && potion < 3){
        cout << "你发现了一个药水，获得1个药水！" << endl;
            potion += 1;
            map[x][y] = 0; 
    }
    else if (map[x][y] == 3 && potion >= 3){
        cout << "背包已满" << endl;
        continue;
    }
    else if (map[x][y] == 8){
        cout << "获得一个钥匙" << endl;
            Key += 1;
            map[x][y] = 0; 
    }
    else if (map[x][y] == 9 && Key >= 1){
        cout << "恭喜你，你到达了出口！" << endl;
        break;
    }
    else if (map[x][y] == 9 && Key < 1){
        cout << "你没有钥匙，无法离开！" << endl;
        continue;
    }
    else if (map[x][y] == 1){
        cout << "你遇到了一个敌人！血量减少10！" << endl;
        hp -= 10;
        map[x][y] = 0;
        if(hp <= 0){
            cout << "你死了，游戏结束！" << endl;
            break;
        }
    }
}
    return 0;
}
