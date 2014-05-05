#! ruby

def quicksort(tab, low, high)

  if low >= high
    return
  end

  min = low
  max = high
  div = tab[min]

  while min < max
    while div <= tab[max] and min < max
      max -= 1
    end
    tab[min] = tab[max]
    min += 1 and min < max
    while div >= tab[min] and min < max
      min += 1
    end
    tab[max] = tab[min]
    max -= 1
  end

  tab[min] = div
  quicksort(tab, low, min - 1)
  quicksort(tab, min + 1, high)
  tab
end

tab = [31,5,7,65,4,2,435,34,87,32,83]
p quicksort(tab, 0, tab.length - 1)

