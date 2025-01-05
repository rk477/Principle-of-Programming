class Car:
        
 def __init__(self, numdoors, price, color, brand):
    self.numdoors = numdoors
    self.price = price
    self.color = color 
    self.brand = brand
     
 def setNoOfdoors (self, nofd):
    self.numdoors = nofd

 def getNoOfdoors (self):
    return self.numdoors

 def setPrice (self, pr):
    self.price = pr

 def getPrice (self):
    return self.price

 def setColor (self, col):
    self.color = col

 def getColor (self):
    return self.color

 def setBrand (self, br):
    self.brand = br

 def getBrand (self):
    return self.brand

 def startCar(self):
    print ("car has started")

 def stopCar(self):
    print ("car has stopped")


car = Car(5, 200000, "While", "ToyCar")
car.startCar()