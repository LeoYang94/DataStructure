cmake_minimum_required(VERSION 2.8)
project(DataStructure)

add_compile_options(-std=c++11 -O3)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH          ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  ${PROJECT_SOURCE_DIR}/lib)

set(INC_DIR ${PROJECT_SOURCE_DIR}/include)

find_package( OpenCV  REQUIRED )
find_package( Eigen3  REQUIRED )
include_directories(${EIGEN3_INCLUDE_DIR} ${INC_DIR} ${OpenCV_INCLUDE_DIRS}  )

add_executable(DataStructure src/main.cpp)
target_link_libraries(DataStructure ${Eigen3_LIBRARIES} ${OpenCV_LIBS})

