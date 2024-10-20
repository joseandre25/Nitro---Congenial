n, q = gets.split.map(&:to_i)
result = q - n 
puts ((result % 2 == 0 && q >= n) ? "vendido" : "sinto muito")