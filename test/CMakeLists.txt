cmake_minimum_required(VERSION 3.23)

set(MOD_UT_NAME ${MOD_NAME}_ut)

add_executable(${MOD_UT_NAME}
	src/nudny/core/arg/Parser_test.cpp
)

target_link_libraries(
	${MOD_UT_NAME}
	GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${MOD_UT_NAME})
