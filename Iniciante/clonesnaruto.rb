n, c = gets.split.map(&:to_i) # n = quantidade de ondas de Zetsus Brancos, c = quantidade de clones iniciais de Naruto
passou = false

i = 0
qtdClones = c 
auxZ = 0

while i < n do
  z, s = gets.split.map(&:to_i) # z = quantidade de Zetsus Brancos, s = aumento de clones após a onda
  auxZ += z
  qtdClones += s
  if auxZ > qtdClones
    passou = true
  end
  i += 1
end

puts passou ? "Madara venceu" : "Naruto defendeu a Vila"
