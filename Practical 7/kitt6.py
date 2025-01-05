class Kitten:
 # constructor
 # def __init__(self):
 # initilialising instance/member variable age
 # self.age=1
 # parameterised constructor
 
 def __init__(self, value):
 # initilialising instance/member variable age
    self.age = value
    
 # an instance/member method
 def display_age(self):
    print(self.age)
    
# creating object of the class. This invokes parameterised constructor
kitt = Kitten(3)
kitt2 = Kitten(4)

# calling the instance/member method using the object kitt
kitt.display_age()
kitt2.display_age()