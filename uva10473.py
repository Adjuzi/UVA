while True:
  number = input()
  
  if number[0] == '0' and number[1] == 'x':
    number = number[2:]
    number = int(number, 16)
    print(number)
  elif int(number) < 0:
    break
  else:
    number = int(number)
    print("0x"+hex(number).upper()[2:])