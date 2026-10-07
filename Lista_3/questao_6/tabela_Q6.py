import pandas as pd

entradas = []
algo_1 = []
algo_2 = []
algo_3 = []
algo_4 = []

with open("entradas_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        entradas.append(int(linha.strip()))

with open("saidas_1_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_1.append(int(linha.strip()))

with open("saidas_2_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_2.append(int(linha.strip()))

with open("saidas_3_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_3.append(int(linha.strip()))

with open("saidas_4_tabela_2.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        algo_4.append(int(linha.strip()))

# Definindo os dados em formato de dicionário
dados = {
    "Entradas": entradas,
    "Algo 1": algo_1,
    "Algo 2": algo_2,
    "Algo 3": algo_3,
    "Algo 4": algo_4
}

# Criando o DataFrame (a tabela)
tabela = pd.DataFrame(dados)

# Exibindo a tabela
print(tabela)