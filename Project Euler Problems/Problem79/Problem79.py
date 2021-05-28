f = open("p079_keylog.txt",'r')

shortest_len = 9999
for elem in f.readlines():
    data = [int(elem) for elem in elem[:-1]]
    start,end = min(data),max(data)
    ans = min(shortest_len,end - start)
print(ans)