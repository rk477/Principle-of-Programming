# Rectangle constructed by a length and width and two methods
# which will compute the area and perimeter of a rectangle.
class Rectangle():
    def __init__(self, width, height):
        self.width  = width 
        self.height  = height

    def getArea(self):
        return self.width*self.height

    def getPerimeter(self):
        return 2 * (self.width + self.height)

rectangle1 = Rectangle(4, 40)
rectangle2 = Rectangle(3.5, 35.9)
print("Width of rectangle 1: ", rectangle1.width)
print("Height of rectangle 1: ", rectangle1.height)
print("Area of rectangle 1: ", rectangle1.getArea())
print("Perimeter of rectangle 1: ", rectangle1.getPerimeter())

print("Width of rectangle 2: ", rectangle2.width)
print("Height of rectangle 2: ", rectangle2.height)
print("Area of rectangle 2: ", rectangle2.getArea())
print("Perimeter of rectangle 2: ", rectangle2.getPerimeter())
