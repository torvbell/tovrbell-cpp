//
// 读文件
//
// Created by 吴彦祖 on 2021/1/27.
//

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void read(const char * __l_dir)
{
    ifstream file(__l_dir);
    string temp;

    if (!file.is_open())
    {
        cout << "文件打开失败，文件路径【" << __l_dir << "】" << endl;
    }

    while (getline(file, temp))
    {
        cout << temp << endl;
    }

    file.close();
}