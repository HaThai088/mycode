def checktang(n):
    a=[]
    kt=True
    for i in range(len(n)):
        a.append(int(n[i]))
    for i in range(len(a)):
        if a[i]>a[i+1]:
            kt=False
            break
    if kt==False:
        return False
    return True

def checkgiam(n):
    a=[]
    kt=True
    for i in range(len(n)):
        a.append(int(n[i]))
    for i in range(len(a)):
        if a[i]<a[i+1]:
            kt=False
            break
    if kt==False:
        return False
    return True

print(checkgiam('987654'))