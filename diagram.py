import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('profile_extended_3.csv')
plt.figure(figsize=(10, 5))

# Создание нового столбца, который объединяет 'prime' и 'exp' как одно целое
if 'exp' in data.columns:
    data['prime_exp'] = data.apply(lambda row: f"{row['prime']}^{row['exp']}", axis=1)
else:
    data['prime_exp'] = data['prime'].astype(str)  # Просто используем 'prime', если 'exp' нет

plt.subplot(1, 2, 1)
plt.plot(data['prime_exp'], data['memory_used'], label='Memory Usage')
plt.title('Memory Usage by Prime Number (and Exponent)')
plt.xlabel('Prime (and Exponent)')
plt.ylabel('Memory Usage (bytes)')
plt.xticks(rotation=80) 

plt.subplot(1, 2, 2)
plt.plot(data['prime_exp'], data['time_elapsed'], label='Execution Time')
plt.title('Execution Time by Prime Number (and Exponent)')
plt.xlabel('Prime (and Exponent)')
plt.ylabel('Time (milliseconds)')
plt.xticks(rotation=80) 

plt.tight_layout()
plt.show()
