#versão mínima requerida para o CMake
cmake_minimum_required(VERSION 3.5)

#configurações tais como flags para o compilador
set(CMAKE_CXX_FLAGS "-Wall -pedantic") 

#especificação de versão da linguagem (
set(CMAKE_CXX_STANDARD 11)

#nome do projeto
project(TEMPERATURA VERSION 1.0 LANGUAGES CXX )

# Diretório contendo os arquivos de cabeçalho
include_directories(include)

# Cria um executável com nome "programa", a partir dos arquivos main.cpp conv.cpp
add_executable( temperatura main.cpp conv.cpp)
