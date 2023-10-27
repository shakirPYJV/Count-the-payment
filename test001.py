while True:
   try:
      a = input("Give me the amount of Payment(Type 'exit' to quit): ")
      if a.lower() == "exit":
         break
      a = int(a)
      if a == 1000:
         b = 1
         print("Here is your money:" ,b,"Dollar")
      elif a < 1000:
           b = 1
           c = 1000-a
           print("Here is your money:" ,b,  "Dollar""\n Your due is",c)
      elif a > 1000:
           b = 1 + (a-1000)
           print("Here is your money " ,b )
      else:
           print("The input is invalid")
   except ValueError:
      print("The input is invalid, Try a different input")        
