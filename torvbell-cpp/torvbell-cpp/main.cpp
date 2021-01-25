//
//  main.cpp
//  torvbell-cpp
//
//  Created by 吴彦祖 on 2021/1/25.
//

#include <iostream>
#include "torvbell-int.hpp"
#include "torvbell-long.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    // ------------------ Int 关键字 ----------------------
    
    print_int_max();
    sizeof_int();
    
    // ----------------------------------------
    
    cout << "\n-------------------------------\n" << endl;
    
    // ------------------ Long 关键字 ----------------------
    
    print_long_max();
    sizeof_long();
    
    // ----------------------------------------
    
    return 0;
}
