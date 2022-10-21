test = input()
test_list = list(test)
flag = 0
for i in range(len(test_list)):
	if(test_list[i] == '('):
		flag += 1
	elif(test_list[i] == ')'):
		flag -= 1
if(flag == 0):
	print("YES")
else:
	print("NO")