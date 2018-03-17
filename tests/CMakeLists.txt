cmake_minimum_required(VERSION 2.8)

file(GLOB test_SRCs
        "*.cpp")


foreach(test_SRC ${test_SRCs})
    get_filename_component(src_name ${test_SRC} NAME)
    set(binary_name "${PROJECT_NAME}_${src_name}")
    add_executable(${binary_name} ${test_SRC})
    target_link_libraries(${binary_name} ${dep_libs} gtest_main)
    add_test(NAME ${src_name} COMMAND $<TARGET_FILE:${binary_name}>)
endforeach()