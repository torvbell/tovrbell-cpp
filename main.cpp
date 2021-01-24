#include <iostream>

/**
 * 比较大小
 * @param n_1 第一个数字
 * @param n_2 第二个数字
 * @return 最大的那个数字
 */
int max(int n_1, int n_2)
{
    if(n_1 > n_2)
        return n_1;
    return n_2;
}

int main() {
    int max_number = max(10, 20);
    std::cout << "最大的数值为[" << max_number << "]" << std::endl;
    return 0;
}
