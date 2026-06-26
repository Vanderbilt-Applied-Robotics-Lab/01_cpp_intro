cmake_minimum_required(VERSION 3.8)
project(cpp_intro)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

## INCLUDE(S)
include_directories(include)

# executables
add_executable(sine_wave src/sine_wave.cpp)

# installs
install(TARGETS sine_wave
  DESTINATION lib/${PROJECT_NAME})

ament_package()
