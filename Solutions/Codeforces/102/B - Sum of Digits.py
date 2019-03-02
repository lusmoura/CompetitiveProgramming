def digitSum(x):
	string_x = str(x)
	total = 0
	for char in string_x:
		total += int(char)
	return total

a = input()
ans = 0

while(int(a) > 9):
	a = digitSum(a)
	ans += 1

print(ans)
	