cmake_minimum_required(VERSION 3.15)
project(FactoryMethod)

# Add the executable target
add_executable(main
  main.cpp
  utils/ClientCode.cpp
  creators/ConcreteCreator1.cpp
  creators/ConcreteCreator2.cpp
  products/ConcreteProduct1.cpp
  products/ConcreteProduct2.cpp
  core/Creator.cpp
)

# Set include directories
target_include_directories(main PRIVATE
  utils
  creators
  products
  core
)
