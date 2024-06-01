import galois
import time
import os
import psutil

pid = os.getpid()
python_process = psutil.Process(pid)

# Создаём поле GF(7)
p = 3
m = 10
GF = galois.GF(p**m)

print(GF.irreducible_poly)

# Элементы поля
a1 = 34234
a2 = 53234
a = GF(a1)
b = GF(a2)

# Сложение
start_time = time.perf_counter_ns()
add_result = a + b
print(f"Addition ({a} + {b}) in GF({p}**{m}): {add_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Умножение
start_time = time.perf_counter_ns()
mul_result = a * b
print(f"Multiplication ({a} * {b}) in GF({p}**{m}): {mul_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Вычитание
start_time = time.perf_counter_ns()
sub_result = a - b
print(f"Subtraction ({a} - {b}) in GF({p}**{m}): {sub_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Деление
start_time = time.perf_counter_ns()
div_result = a / b
print(f"Division ({a} / {b}) in GF({p}**{m}): {div_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")
