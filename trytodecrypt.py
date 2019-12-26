#String Cut
def cut(s,l):
    if len(s)%l!=0:
        return -1
    r=[]
    for x in range(0,len(s),l):
        r.append(s[x:x+l])
    return tuple(r)

data="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_.,;:?! "
table=[]
enc=""

def varset(x):
    global table,enc
    inp=input()
    table=cut(enc,2)
    enc=input()

def find(x):
    global table,data
    for t in range(0,len(data)):
        if int(x,16)-t==table[t]:
            return data[t]
    return -1
