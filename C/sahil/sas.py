l=[]
m=[]
k = int(input())
for i in range(k):
    name=input()
    l.append(name)
    score=int(input())
    m.append(score)
    
    
l.sort()
m.sort()
print(l)
print(m)


print(m[1])


# for i in range(k):
#     if (m[0]==m[i]):
#         m.pop(0)
#         m.pop(1)
#         if (m[0]==m[1]):
#             print(m[0],m[1])
#         else:
#             print(m[0])

    
#     else:
#         if (m[1]==m[i]):
#             print(m[1],m[i])
#         else:
#             print(m[0])

