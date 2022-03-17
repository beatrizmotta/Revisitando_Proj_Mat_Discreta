from math import floor

def number_to_binary(number):
    i = 0
    num_binary = list()
    while (number > 0):
        num_binary.append(number % 2)
        number = floor(number/2)
        i = i + 1
    return num_binary

numero = int(input("Que número você deseja: "))
numero_binario = number_to_binary(numero)
numero_binario.reverse()
#18446744073709551615
print(f'Tamanho: {len(numero_binario)}')
print(numero_binario)


