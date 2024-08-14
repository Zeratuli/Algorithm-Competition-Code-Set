import pandas as pd

data = {'姓名': ['小明', '小红', '小林'],
        '语文': [96, 107, 98],
        '数学': [111, 125, 133]}

df = pd.DataFrame(data)

df.loc[df['姓名'] == '小明', '数学'] = 0

xiaohong_scores = df.loc[df['姓名'] == '小红', ['语文', '数学']]
math_scores = df['数学']

print(xiaohong_scores)
print(math_scores)
