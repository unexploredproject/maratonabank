def calcJurosSimples(valor, juros, meses):
    return valor + (juros * valor * meses)

valor = float(input("Digite o valor em R$: "))
juros = float(input("Digite o juros em %: "))/100
meses = float(input("Digite o tempo em meses: "))

print("O valor final é: ", calcJurosSimples(valor, juros, meses))

