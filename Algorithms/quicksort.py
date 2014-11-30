#! python

from random import randint

def quicksort(tab, low, high):
    if low >= high:
        return tab

    min = low
    max = high
    div = tab[low]

    while True:
        while min < max and div <= tab[max]:
            max -= 1

        if min >= max:
            break
            
        tab[min] = tab[max]
        min += 1

        while min < max and div >= tab[min]:
            min += 1

        if min >= max:
            break
        
        tab[max] = tab[min]
        max -= 1

    tab[max] = div
    quicksort(tab, low, max - 1)
    quicksort(tab, max + 1, high)
    return tab


tab = list()
for n in range(0,10):
    tab.append(randint(0,100))

print quicksort(tab, 0, len(tab) - 1)
