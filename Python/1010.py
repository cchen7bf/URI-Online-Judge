linha=input().split(" ")

codigo1=int(linha[0])
qtd1=int(linha[1])
valor1=float(linha[2])

linha2=input().split(" ")
codigo2=int(linha2[0])
qtd2=int(linha2[1])
valor2=float(linha2[2])

print("VALOR A PAGAR: R$ {:.2f}" .format((qtd1*valor1)+(qtd2*valor2)))

