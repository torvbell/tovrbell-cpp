//
// 数组学习
//
// Created by 吴彦祖 on 2021/1/26.
//

#include <iostream>

/**
 * 获取数组大小
 * @param _int_array int类型的数组
 * @return 数组占用空间大小
 */
void clac_sizeof_arr(int arr[])
{
    std::cout << "in func..." << std::endl;
    std::cout << "数组地址: " << arr << std::endl;
    std::cout << "数组大小: " << sizeof(&arr) << std::endl;
    std::cout << "数组元素总数: " << sizeof(&arr) / sizeof(arr[0]) << std::endl;
}

// 二维数组（Two-dimensional）
void dimensional_t()
{
    int arr[2][3] = {{1, 2, 3},
                     {2, 3, 4}};

    for(auto & i : arr)
    {
        for(int j : i)
        {
            std::cout << j << std::endl;
        }
    }


}