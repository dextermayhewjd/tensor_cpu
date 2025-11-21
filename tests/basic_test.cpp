#include "tensora/tensor.h"
#include <iostream>

int main() {
    tensora::Tensor t({2, 3});
    std::cout << "Tensor rank: " << t.shape().size() << "\n";
    return 0;
}

