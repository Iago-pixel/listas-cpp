import pandas as pd

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

# Definindo os dados em formato de dicionário
dados = {
    'Entradas': entradas,
    'Algo 1': algo_1,
    'Algo 2': algo_2,
    'Algo 3': algo_3
}

# Criando o DataFrame (a tabela)
tabela = pd.DataFrame(dados)

# Exibindo a tabela
print(tabela)