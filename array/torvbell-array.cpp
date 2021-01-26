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
int _clac_sizeof_arr()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    return sizeof(arr) / sizeof(int);
}
