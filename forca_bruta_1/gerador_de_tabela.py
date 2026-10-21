import pandas as pd

entradas = [entrada for entrada in range(100,901,100)]
saidas = []

with open("./forca_bruta_1/saidas.txt", "r", encoding="utf-8") as arquivo:
    for linha in arquivo:
        saidas.append(int(linha.strip()))

# Definindo os dados em formato de dicionário
dados = {
    'Tamanho da lista': entradas,
    'Tempo de execução': saidas,
}

# Criando o DataFrame (a tabela)
tabela = pd.DataFrame(dados)

# Exibindo a tabela
print(tabela)