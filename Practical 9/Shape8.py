class Shape:
    
    # Constructor for Shape class
    def __init__(self, colour='Black'):
        self.colour = colour
        print("Shape constructor is called")
    
    def display(self):
        print("Shape is displaying")
    
    def getColour(self):
        return self.colour

class Rectangle(Shape):
    
    # Constructor for Rectangle class, Base class constructor is called using 'super'
    def __init__(self):
        super().__init__()
        print("Rectangle constructor is called")
    
    def display(self):
        print("Rectangle is displaying")
    
    def getRectangleColour(self):
        return self.getColour()
 
class Square(Shape):
    pass

rec = Rectangle()
print(rec.getRectangleColour())
rec.display()
sqr = Square()
sqr.display()
print(sqr.getColour())
