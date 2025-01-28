import itertools

def is_prime(n):
    """Проверяет, является ли число простым."""
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def generate_primes():
    """Генератор простых чисел."""
    n = 2
    while True:
        if is_prime(n):
            yield n
        n += 1

def perfect_numbers():
    """Генератор совершенных чисел."""
    for p in generate_primes():
        mersenne_candidate = 2**p - 1
        if is_prime(mersenne_candidate):
            perfect_number = 2**(p - 1) * mersenne_candidate
            yield perfect_number

def main():
    """Основная функция программы."""
    print("Поиск совершенных чисел (программа работает бесконечно):")
    for perfect_number in perfect_numbers():
        print(f"Найдено совершенное число: {perfect_number}")

if __name__ == "__main__":
    main()