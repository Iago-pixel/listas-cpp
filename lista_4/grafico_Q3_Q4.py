import matplotlib.pyplot as plt

# entradas = [1000, 10000, 100000, 1000000]
# saidas = [1, 10, 100, 1019]

entradas = [100, 1000, 10000, 100000, 1000000]
saidas = [0, 5, 43, 402, 5066]

plt.plot(entradas, saidas)

plt.title("Tempo de processo por tamanho de entrada")
plt.xlabel("Entradas")
plt.ylabel("Tempo de execução")

plt.show()
