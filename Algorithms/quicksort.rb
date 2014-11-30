#! ruby

def quicksort(tab, low, high)

  if low >= high
    return tab
  end

  min = low
  max = high
  div = tab[min]

  while true
    while min < max and div <= tab[max]
      max -= 1
    end
    break if min >= max
    tab[min] = tab[max]
    min += 1
    while min < max and div >= tab[min]
      min += 1
    end
    break if min >= max
    tab[max] = tab[min]
    max -= 1
  end

  tab[max] = div
  quicksort(tab, low, max - 1)
  quicksort(tab, max + 1, high)
  tab
end

module Enumerable
  def sorted?
    each_cons(2).all? {|a, b| (a <=> b) <= 0 }
  end
end

num = Random.new
tab = Array.new(10) {|n| n = num.rand(0..100)}

quicksort(tab, 0, tab.length - 1)

print "sorted? #{tab.sorted?}\n"
print tab

