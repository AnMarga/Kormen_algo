Первая часть книги повествует о простейших алгоритмах: сортировках, рекурсиях, слуайных величинах.

iNSERTION_SORT
Сортировка вставкой. Суть алгоритма заключается в том, что мыы идём от 1-ого элемента к последнему, каждый раз сравнивая взятый элемент с предыдущими: если взятый элемент меньше, чем тот, с которым мы сравниваем, то свдигаем его в массиве на одну позицию вправо; если больше, то ставим его на эту позицию.
Инвариант алгоритма: для j-й итерации цикла, элементы с 0 по j-1 отсортированны.