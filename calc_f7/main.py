def to_decimal(num):
    return int(num, 7)

def from_decimal(num):
    result = ""
    while num > 0:
        result = str(num % 7) + result
        num = num // 7
    return result if result else "0"

def add(a, b):
    return from_decimal(to_decimal(a) + to_decimal(b))

def subtract(a, b):
    return from_decimal(to_decimal(a) - to_decimal(b))

def multiply(a, b):
    return from_decimal(to_decimal(a) * to_decimal(b))

def divide(a, b):
    return from_decimal(to_decimal(a) // to_decimal(b))

def power(a, b):
    return from_decimal(to_decimal(a) ** to_decimal(b))

def main():
    print("Калькулятор в 7-ричной системе счисления")
    print("Доступные операции: +, -, *, /, ^")

    while True:
        try:
            num1 = input("Введите первое число: ")
            operator = input("Введите оператор: ")
            num2 = input("Введите второе число: ")

            if operator == '+':
                result = add(num1, num2)
            elif operator == '-':
                result = subtract(num1, num2)
            elif operator == '*':
                result = multiply(num1, num2)
            elif operator == '/':
                result = divide(num1, num2)
            elif operator == '^':
                result = power(num1, num2)
            else:
                print("Неверный оператор")
                continue

            print(f"Результат: {result}")

        except ValueError:
            print("Ошибка: введено неверное число")
        except ZeroDivisionError:
            print("Ошибка: деление на ноль")

        again = input("Хотите выполнить еще одну операцию? (да/нет): ")
        if again.lower() != 'да':
            break

if __name__ == "__main__":
    main()