# Сборка и запуск
make && ./build/program.out

# Задание

ПРОВЕРОЧНОЕ ЗАДАНИЕ
ДЛЯ СОИСКАТЕЛЯ ВАКАНСИИ «ИНЖЕНЕР-ПРОГРАММИСТ»
Дана последовательность отсчетов, представляющих собой пары (int Х : int Y).
Отсчеты упорядочены по значениям Х.
В этой последовательности могут встречаться непрерывные подпоследовательности,
состоящие из идентичных отсчетов. Идентичные отсчеты имеют одинаковые значения Y.
Реализовать функцию, прореживающую исходную последовательность следующим
образом:
В каждой подпоследовательности идентичных отсчетов оставить только первый и
последний отсчеты, а так же каждый n-ный отсчет (n > 2).
Вывести на экран последовательность до и после применения функции прореживания.
Язык программирования: C++.
Тип приложения: консольное.
Входные данные задаются непосредственно в тексте программы (жесткое кодирование).

# Todo

Чуть поленился gtest добавить