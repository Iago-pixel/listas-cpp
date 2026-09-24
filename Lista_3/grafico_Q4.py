import matplotlib.pyplot as plt

entradas = []
saidas = []

with open("entradas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        entradas.append(int(linha.strip()))

with open("saidas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        saidas.append(int(linha.strip()))

plt.plot(entradas, saidas)

plt.title("Detectar se é primo vs tempo de execução")
plt.xlabel("Entradas")
plt.ylabel("Tempo de execução")

plt.ticklabel_format(style='plain', axis='both', useOffset=False)

plt.show()
