add_executable(tensora_basic_test
    basic_test.cpp
)

target_link_libraries(tensora_basic_test
    PRIVATE
        tensora_cpu
)

