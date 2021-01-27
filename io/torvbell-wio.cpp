//
// 写文件
//
// Created by 吴彦祖 on 2021/1/27.
//

#include <iostream>
#include <ostream>
#include <fstream>

void write(char * path, char * value)
{
    std::fstream file(path);

    if(!file.is_open())
    {
        std::cerr << "文件打开失败" << std::endl;
    }
}