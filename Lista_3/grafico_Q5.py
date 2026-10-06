import matplotlib.pyplot as plt

entradas = []
algo_1 = []
algo_2 = []
algo_3 = []

with open("entradas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        entradas.append(int(linha.strip()))

with open("saidas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_1.append(int(linha.strip()))

with open("saidas2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_2.append(int(linha.strip()))

with open("saidas3.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_3.append(int(linha.strip()))

plt.plot(entradas, algo_1)
plt.plot(entradas, algo_2)
plt.plot(entradas, algo_3)

plt.title("Detectar se é primo vs tempo de execução")
plt.xlabel("Entradas")
plt.ylabel("Tempo de execução")

plt.ticklabel_format(style='plain', axis='both', useOffset=False)

plt.show()
