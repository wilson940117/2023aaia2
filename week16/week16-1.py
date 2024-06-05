from collections import Counter
words = ["bella", "label", "roller"]
for i in range(3):
  counter = Counter(words[0])
  print(words[0],counter)
ans=Counter(words[0])&Counter(words[1])&Counter(words[2])
print(ans)