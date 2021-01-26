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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    clac_sizeof_arr(arr);

    dimensional_t();

    return 0;
}
