import numpy as np
def A(x):#função que retorna o juros total ao fianl de um ano
  return 100*(((1+x/100)**12) - 1)
def MBissecao(f,a,b,erro,e,p,VI,mes,pp):#metodo da bisseção para encontrar o zero da função e=entrada,p=parcelas,VI=valor inicial,mes=primeiro mes que a parcela é paga
  m = (a+b)/2
  fm = f(m,p,e,VI,mes,pp)
  i=0
  while ((fm > erro and fm>=0)or(-fm > erro and fm<=0) or i > 50):
    if f(a,p,e,VI,mes,pp)*fm < 0:
      a = a
      b = m
    else:
      a = m
      b = b
    m = (a+b)/2
    fm = f(m,p,e,VI,mes,pp)
    i = i+1
  return m
def valorcorrigido(x,parcelas,entrada,VI,mes,pp):#Retorna o valor total pago corrigido com juros para o presente - o valor inicial sem juros
  total = 0
  for i in parcelas:
    total += (i)/((1 + x/100)**mes)
    mes+=pp
  return entrada + total-VI
#Questão 1
jurosm = MBissecao(valorcorrigido, 1, 10, 1e-5,139.65,np.full(11,139.56),1305,1,1)
print("Respostas:")
print("Taxa de juros mensal = {}%".format(jurosm))
print("Taxa de juros anual ={}%".format(A(jurosm)))
#Questão 2
jurosm = MBissecao(valorcorrigido, 1, 10, 1e-5,27000,[24000,30000,32000,22000],129000,1,1)
print("Respostas:")
print("Taxa de juros mensal = {}%".format(jurosm))
if(jurosm<2):
  print("É melhor comprar parcelado")
else:
  print("É melhor comprar com o emprestimo")
  #Questão 3
parcelas=[48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,48.81,1048.81]
jurosm = MBissecao(valorcorrigido, 0, 2, 1e-5,0,parcelas,889.18,4,6)
print("Respostas:")
print("Taxa de juros mensal = {}%".format(jurosm))
print("Taxa de juros anual ={}%".format(A(jurosm)))