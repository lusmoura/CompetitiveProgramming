def has_doubles(n):
    return len(set(str(n))) < len(str(n))

a = input()
a = int(a)
a += 1
while(has_doubles(a)):
	a = int(a)
	a += 1
print(a)