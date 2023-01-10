import random

minuscula = 'abcdefghijklmnopqrstuvwxyz'
maiuscula = minuscula.upper()
numerais = '0123456789'
simbolos = '!@#$%¨&*:><'
tamanho = 8
juncao = minuscula + maiuscula + numerais + simbolos
tamanho_senha = 8 

senha = ''.join(random.sample(juncao, tamanho_senha))

print('Nova senha gerada:', senha)
