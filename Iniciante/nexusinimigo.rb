tr, i, tn = gets.split.map(&:to_i)
puts ((tn == 2) ? "VITORIA" : "#{9 - tr} #{3 - i} #{2 - tn}")