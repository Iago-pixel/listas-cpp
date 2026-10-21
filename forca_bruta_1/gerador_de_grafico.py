import matplotlib.pyplot as plt

entradas = [entradas for entradas in range(100,901,100)]
saidas = []

with open("./forca_bruta_1/saidas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        saidas.append(int(linha.strip()))

plt.plot(entradas, saidas)

plt.title("Detectar se tem soma s vs tempo de execução")
plt.xlabel("Entradas")
plt.ylabel("Tempo de execução")

plt.ticklabel_format(style='plain', axis='both', useOffset=False)

plt.show()
