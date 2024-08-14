import pandas as pd

data = {'����': ['С��', 'С��', 'С��'],
        '����': [96, 107, 98],
        '��ѧ': [111, 125, 133]}

df = pd.DataFrame(data)

df.loc[df['����'] == 'С��', '��ѧ'] = 0

xiaohong_scores = df.loc[df['����'] == 'С��', ['����', '��ѧ']]
math_scores = df['��ѧ']

print(xiaohong_scores)
print(math_scores)
