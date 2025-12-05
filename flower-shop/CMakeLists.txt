cmake_minimum_required(VERSION 3.10)
project(FlowerShop)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем все исходные файлы
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Создаем исполняемый файл
add_executable(FlowerShop main.cpp ${SOURCES})

# Указываем путь к заголовочным файлам
target_include_directories(FlowerShop PRIVATE include)

# Выводим информацию для отладки
message("Найдено исходных файлов: ${SOURCES}")
message("Найдено заголовочных файлов: ${HEADERS}")