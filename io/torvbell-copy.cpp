//
// Created by 吴彦祖 on 2021/1/27.
//

#include <iostream>
#include <fstream>

#define BUFSIZE 100

using namespace std;

int main(int argc, char **argv)
{

    int a = 123; // 将a输出到文件中
    ofstream out("/Users/wuyanzu/project/c:c++/d1.txt", ios::out); // 输出流, ios::out表示如果文件不存在就创建，如果存在则替换

    out << a;
    out.close();

    return 0;
}
