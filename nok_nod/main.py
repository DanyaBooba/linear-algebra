def gcd(a, b):
    """Вычисляет НОД двух чисел с помощью алгоритма Евклида."""
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    """Вычисляет НОК двух чисел."""
    return abs(a * b) // gcd(a, b)

def main():
    # Ввод двух чисел
    try:
        num1 = int(input("Введите первое число: "))
        num2 = int(input("Введите второе число: "))

        # Вычисление НОД и НОК
        gcd_result = gcd(num1, num2)
        lcm_result = lcm(num1, num2)

        # Вывод результатов
        print(f"НОД чисел {num1} и {num2} равен: {gcd_result}")
        print(f"НОК чисел {num1} и {num2} равен: {lcm_result}")

    except ValueError:
        print("Ошибка: введите целые числа.")

if __name__ == "__main__":
    main()