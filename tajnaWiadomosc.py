import codecs

with codecs.open("tajnaWiadomosc.txt", 'r', 'utf-8') as f:
    s = f.read()
    ans = ""
    for i in range(0, len(s)):
        if s[i].isupper():
            x = 1
            b = 0
            while x <= 5:
                if not s[i+x+b].isalpha():
                    b += 1
                else: x += 1
            ans += s[(i + x + b - 1)]
    print(ans)
