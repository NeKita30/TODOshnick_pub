# TODOshnick
# Project for TP

Todoshnick - средство управления задачами. 

Удобный список дел с простой структурой: формируем в жизни Aspect'ы, в каждом из них 
заводим под важные дела Project'ы, выделяем Task'и и разбиваем их на Todo.

Структура для Note, Aspect, Project, Task и Todo: древовидная (паттерн Composite),
при этом Todo - листы, Note - главный абстрактный класс в корне. То есть каждый Note,
кроме Todo, может хранить список детей разных типов.

Для показа информации используется паттерн Visitor - для каждого
конкретного случая есть своя реализация абстрактного класса Viewer: полное названое, 
короткое, описание Note и т.д. В каждой реализации будут определены методы для каждого
типа Note, принципиально отличающиеся у листов (Todo) и остальных вершин структуры 
(должны обходить детей вершины).

In checkpoint 1:

Реализованы классы Note, Aspect, Project, Task и Todo, добавлены диаграммы и README.


