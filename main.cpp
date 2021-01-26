//
//  main.cpp
//  torvbell-cpp
//
//  Created by 吴彦祖 on 2021/1/25.
//

#include <iostream>
#include "point/torvbell-point.cpp"
#include "small-project/torvbell-builder-cpp/bootstrap-build.h"
#include "console-input/torvbell-console-input.cpp"
#include "array/torvbell-array.cpp"

using namespace std;

int main(int argc, const char *argv[])
{
    cout << "计算Int数组大小: ["<< _clac_sizeof_arr() << "]" << endl;
    return 0;
}
