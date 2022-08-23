from random import randint

def quicksort(list):
    """
    Sorting a list with a randomized quicksort algorithm.

    :param list: list of items to be sorted
    :return: a sorted list of items
    """

    size = len(list)

    # if list is small
    if size < 2:
        return list
    elif size == 2:
        if list[0] <= list[1]:
            return list
        else:
            return [list[1], list[0]]

    # else recurse
    pivot_index = randint(0,size-1)
    pivot = list.pop(pivot_index)
    less_than_list = []
    greater_than_list = []
    for item in list:
        if item <= pivot:
            less_than_list.append(item)
        else:
            greater_than_list.append(item)
    
    return quicksort(less_than_list) + [pivot] + quicksort(greater_than_list)
