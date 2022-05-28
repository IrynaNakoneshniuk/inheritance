# ITMO-Course-Project
My first C++ program made as a course project in ITMO University, 2nd semester.

Below you can see the task (in __Russian__). In a few words - the task was to create 1 class-parent and 2 descendants.
Train inheritance, overriding operators and work with constructors in C++. 
____
## ЗАДАНИЕ НА КУРСОВОЙ ПРОЕКТ (РАБОТУ)
### Описать базовый класс СТРОКА.

__Обязательные члены класса:__
* указатель на char - хранит адрес динамически выделенной памяти для размещения символов строки;
* значение типа int - хранит длину строки в байтах.

__Обязательные методы должны выполнять следующие действия:__
* конструктор без параметров;
* конструктор, принимающий в качестве параметра Си-строку (заканчивается нулевым байтом);
* конструктор, принимающий в качестве параметра символ (char).
* конструктор копирования;
* деструктор.
* проверка, пуста ли строка;
### Производный от СТРОКА класс СТРОКА_ИДЕНТИФИКАТОР
Строки данного класса строятся по правилам записи идентификаторов
в СИ, и могут включать в себя только те символы, которые могут входить
в состав Си-идентификаторов. Если исходные данные противоречат правилам
записи идентификатора, то создается пустая СТРОКА_ИДЕНТИФИКАТОР.

__Обязательные методы:__
* конструктор без параметров;
* конструктор, принимающий в качестве параметра Си-строку (заканчивается нулевым байтом);
* конструктор копирования;
* деструктор.
* перевод всех символов строки (кроме цифр) в верхний регистр;

__Переопределить следующие операции:__
* присваивание (=);
* сложение (+) – операция конкатенации строк.
* индексное выражение [];
### Производный от СТРОКА класс ДЕСЯТИЧНАЯ_СТРОКА.
Строки данного класса могут содержать только символы десятичных цифр и символы – и +, задающие знак числа. Символы – или + могут находиться только в первой позиции числа, причем символ + может отсутствовать, в этом случае число считается положительным. Если в составе инициализирующей строки будут встречены любые символы, отличные от допустимых, ДЕСЯТИЧНАЯ_СТРОКА принимает нулевое значение. Содержимое данных строк рассматривается как десятичное число.

__Обязательные методы:__
* конструктор без параметров;
* конструктор, принимающий в качестве параметра Си-строку (заканчивается нулевым байтом);
* конструктор копирования;
* деструктор;
* получение информации о знаке числа.

__Переопределить следующие операции:__
* присваивание (=);
* сложение (+) - арифметическая сумма строк;

Разработчик вправе вводить любое (с обоснованием необходимости)
число дополнительных членов и методов.
