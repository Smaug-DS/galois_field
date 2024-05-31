import galois
import time
import os
import psutil

pid = os.getpid()
python_process = psutil.Process(pid)

# Создаём поле GF(7)
GF23 = galois.GF(2**3)

print(GF23.irreducible_poly)

# Элементы поля
a = GF23(4)
b = GF23(6)

# Сложение
start_time = time.perf_counter_ns()
add_result = a + b
print(f"Addition ({a} + {b}) in GF(2**3): {add_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Умножение
start_time = time.perf_counter_ns()
mul_result = a * b
print(f"Multiplication ({a} * {b}) in GF(2**3): {mul_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Вычитание
start_time = time.perf_counter_ns()
sub_result = a - b
print(f"Subtraction ({a} - {b}) in GF(2**3): {sub_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")

# Деление
start_time = time.perf_counter_ns()
div_result = a / b
print(f"Division ({a} / {b}) in GF(2**3): {div_result}")
print(f"--- {(time.perf_counter_ns() - start_time) / 1000 / 1000 } milliseconds ---")
print(f"--- {a.__sizeof__() + b.__sizeof__() + add_result.__sizeof__()} bytes ---")
