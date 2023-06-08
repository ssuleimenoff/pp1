# *point : 95+ = 4.0
#         90+ = 3.67
#         85+ = 3.33
#         80+ = 3.0
#         75+ = 2.67
#         70+ = 2.33*
a = int(input())
b = 0
curr = 0
acc = 0
while b < a:
    credit = int(input())
    points = int(input())
    curr += (points * credit)
    b += 1
    acc += credit
gpa = curr / acc
print(gpa)