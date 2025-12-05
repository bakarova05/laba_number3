@echo off                     # Выключаем отображение команд
g++ -std=c++17 main.cpp -o calculator.exe  # Компилируем
if exist calculator.exe (     # Проверяем, создался ли файл
    echo Compilation successful!  # Если да - успех
    calculator.exe            # Запускаем программу
) else (
    echo Compilation failed!  # Если нет - ошибка
)
pause                         # Ждем нажатия клавиши