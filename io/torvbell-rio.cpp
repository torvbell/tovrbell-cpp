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
    string          temp;
    ifstream        file(__l_dir);

    if (!file.is_open())
        cout << "文件打开失败，文件路径【" << __l_dir << "】" << endl;

    // 一行一行的读取
    while (getline(file, temp))
        cout << temp << endl;

    file.close();
}