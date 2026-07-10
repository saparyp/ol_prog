s1 = input()
s2 = input()
n = len(s1)
idx = (s1 + s1).rfind(s2) # все возможные сдвиги в двойной строке s1+s1
if idx == -1:
    print(-1)
else:
    print((n - idx) % n) # минимальный сдвиг = длина строки - последнее вхождение
