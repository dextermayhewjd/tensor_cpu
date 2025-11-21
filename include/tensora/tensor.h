#pragma once

#include <vector>
#include <cstdint>   

namespace tensora {

class Tensor {
public:
    Tensor() = default;
    explicit Tensor(const std::vector<int64_t>& shape)
        : shape_(shape) {}

    const std::vector<int64_t>& shape() const { return shape_; }

private:
    std::vector<int64_t> shape_;
};

} // namespace tensora
