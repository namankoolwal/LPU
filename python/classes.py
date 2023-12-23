# class Father :
#  def FatherFunction(self):
#   print("This is father function")

# class Mother :
#  def MotherFunction(self):
#   print("This is mother function")

# class Son (Father, Mother):
#  def SonFunction(self):
#   print("This is son function")


# obj1 = Son()
# obj1.MotherFunction()
# obj1.SonFunction()
# obj1.FatherFunction()



class Father :
    def FatherFunction(self, temp1, temp2):
        print("This is father function")
        temp3 = temp1 + temp2
        print(temp3)

class Mother :
    def MotherFunction(self):
        print("This is mother function")

class Son (Father, Mother):
    def SonFunction(self):
        print("This is son function")

obj1 = Son()
obj1.MotherFunction()
obj1.SonFunction()
obj1.FatherFunction(50, 60)