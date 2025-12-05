@echo off
echo Компиляция проекта Цветочница...
echo.

g++ -std=c++17 -Iinclude ^
    src/Flower.cpp ^
    src/GardenFlower.cpp ^
    src/WildFlower.cpp ^
    src/Rose.cpp ^
    src/Tulip.cpp ^
    src/Chamomile.cpp ^
    src/Bouquet.cpp ^
    main.cpp ^
    -o flower_shop.exe

if exist flower_shop.exe (
    echo Сборка успешна!
    echo Запуск программы...
    echo ================================
    flower_shop.exe
    echo ================================
) else (
    echo Ошибка компиляции!
)

pause