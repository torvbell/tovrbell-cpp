#include <iostream>

int max(int n_1, int n_2)
{
    if(n_1 > n_2)
        return n_1;
    return n_2;
}

int main() {
    std::cout << max(10, 20) << std::endl;
    return 0;
}
