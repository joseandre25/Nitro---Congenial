n1 = gets.chomp.to_f
n2 = gets.chomp.to_f
n3 = gets.chomp.to_f
n4 = gets.chomp.to_f

media = ((n1 + n2 + n3 + n4) / 4).to_f

puts (media >= 5.0 ? "Parabens bruxao, eh nois que voa, voce passou!" : "Voce nao passou, tente usar a varinha na proxima vez!") 