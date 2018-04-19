cmake_minimum_required(VERSION 3.7)
project(FamilyTree)

set(CMAKE_CXX_STANDARD 14)



add_subdirectory(googletest-master)
include_directories(googletest-master/googletest/include)
include_directories(googletest-master/googlemock/include)

set(SOURCE_FILES FamilyTree.cpp FamilyTree.hpp FamilyMemberRoot.cpp FamilyMemberRoot.hpp FamilyMember.cpp FamilyMember.hpp ut/FamilyTreeTest.cpp)
set(TEST_FILES src/ut/main.cpp )

add_executable(${PROJECT_NAME} src/main.cpp ${SOURCE_FILES})
add_executable(ut-run ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(ut-run gtest gtest_main)