n = input()

length = len(n)

sum1, sum2 = 0, 0
for i in range(length//2):  # 0~2
    sum1 += int(n[i])

for j in range(length//2, length):
    sum2 += int(n[j])

if sum1 == sum2:
    print("LUCKY")
else:
    print("READY")
