import matplotlib.pyplot as plt

entradas = []
algo_1 = []
algo_2 = []
algo_3 = []
algo_4 = []

with open("entradas_1.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        entradas.append(int(linha.strip()))

with open("entradas_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        entradas.append(int(linha.strip()))

entradas.sort(reverse=True)

with open("saidas_1_tabela_1.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_1.append(int(linha.strip()))

with open("saidas_1_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_1.append(int(linha.strip()))

algo_1.sort(reverse=True)

with open("saidas_2_tabela_1.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_2.append(int(linha.strip()))

with open("saidas_2_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_2.append(int(linha.strip()))

algo_2.sort(reverse=True)

with open("saidas_3_tabela_1.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_3.append(int(linha.strip()))

with open("saidas_3_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_3.append(int(linha.strip()))

algo_3.sort(reverse=True)

with open("saidas_4_tabela_1.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_4.append(int(linha.strip()))

with open("saidas_4_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_4.append(int(linha.strip()))

algo_4.sort(reverse=True)

plt.plot(entradas, algo_1)
plt.plot(entradas, algo_2)
plt.plot(entradas, algo_3)
plt.plot(entradas, algo_4)

plt.title("Detectar se é primo vs tempo de execução")
plt.xlabel("Entradas")
plt.ylabel("Tempo de execução")

plt.ticklabel_format(style='plain', axis='both', useOffset=False)

plt.show()
