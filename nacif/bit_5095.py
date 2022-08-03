def fAND(tam, str1, str2):
    for i in range(tam):
        if(str1[i]!=str2[i]):
            str1[i] = '0'
    return str1
def fOR(tam, str1, str2):
    for i in range(tam):
        if(str1[i]=='1' or str2[i]=='1'):
            str1[i] = '1'
    return str1
def fXOR(tam, str1, str2):
    for i in range(tam):
        if(str1[i]!=str2[i]):
            str1[i] = '1'
        else:
            str1[i] = '0'
    return str1
def fNOT(tam, str1):
    for i in range(tam):
        if(str1[i]=='1'):
            str1[i] = '0'
        else:
            str1[i] = '1'
    return str1
tam = int(input())
num1 = list(input())
num2 = list(input())
operacao = input()
teste = operacao.strip()
x = teste.split()
if(x[0]=="S1"):
    str1 = num1
else:
    str1 = num2
if(x[2]=="S1"):
    str2 = num1
else:
    str2 = num2
if(len(x)>3):
    if(x[4]=="S1"):
        str3 = num1
    else:
        str3 = num2
if(x[1]=="AND"):
    str1 = ''.join(fAND(tam, str1, str2))
elif(x[1]=="OR"):
    str1 = ''.join(fOR(tam, str1, str2))
elif(x[1]=="XOR"):
    str1 = ''.join(fXOR(tam, str1, str2))
elif(x[1]=="NAND"):
    str1 = ''.join(fAND(tam, str1, str2))
    str1 = ''.join(fNOT(tam, str1))
elif(x[1]=="NOR"):
    str1 = ''.join(fOR(tam, str1, str2))
    str1 = ''.join(fNOT(tam, str1))
elif(x[1]=="MOR"):
    str1 = ''.join(fNOT(tam, str1))
    str1 = ''.join(fOR(tam, str1, str2))
if(len(x)>3):
    if(x[3]=="AND"):
        str1 = ''.join(fAND(tam, str1, str2))
    elif(x[3]=="OR"):
        str1 = ''.join(fOR(tam, str1, str2))
    elif(x[3]=="XOR"):
        str1 = ''.join(fXOR(tam, str1, str2))
    elif(x[3]=="NAND"):
        str1 = ''.join(fAND(tam, str1, str2))
        str1 = ''.join(fNOT(tam, str1))
    elif(x[3]=="NOR"):
        str1 = ''.join(fOR(tam, str1, str2))
        str1 = ''.join(fNOT(tam, str1))
    elif(x[3]=="MOR"):
        str1 = ''.join(fNOT(tam, str1))
        str1 = ''.join(fOR(tam, str1, str2))
print(str1)