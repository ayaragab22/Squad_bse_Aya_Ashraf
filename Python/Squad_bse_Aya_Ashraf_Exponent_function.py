
base_num = int(input("Enter your base number: "))
pow_num = int(input("Enter your exponent: "))


def raise_to_power(base_num,pow_num):
  result = 1
  for index in range(pow_num):
    result = result * base_num
  return result


x =raise_to_power(base_num,pow_num)
print(x)   