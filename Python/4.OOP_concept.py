#Data Encapsulation:-

#1
class Computer:
    def __init__(self):
        self._maxprice = 900

    def sell(self):
        print("Selling price: {}".format(self._maxprice))

    def set_max_price(self, price):
        self._maxprice = price

c = Computer()
c.sell()

c._maxprice = 1000
c.sell()

c.set_max_price(1000)
c.sell()

#2
class Employee:
  def __init__(self, name, salary):
    self.name = name
    self.salary = salary

  def work(self):
    print(f"{self.name} is working")

  def show(self):
    print(f"{self.name} earns {self.salary}")

employee = Employee("John", 3000)
employee.work()
employee.show()

#Data Abstraction:-

#1
from abc import ABC
class car(ABC):
    def mileage(self):
        pass
class Tesla(car):
    def mileage(self):
        print("\nThe mileage is 30KmpH")
class suzuki(car):
    def mileage(self):
        print("The mileage is 25KmpH")
class renault(car):
    def mileage(self):
        print("The mileage is 27KmpH\n")
t = Tesla()
t.mileage()
s = suzuki()
s.mileage()
r = renault()
r.mileage()


#2
from abc import ABC
class rect():
    length = 4
    width = 6
    height = 2
    def volume(self):
        return self.length*self.width*self.height
class sphere():
    radius = 8
    def volume(self):
        return 3.14*self.radius*self.radius
class cube():
    edge = 5
    def volume(self):
        return self.edge*self.edge*self.edge
class rectangle_3D():
    length = 5
    width = 4
    def volume(self):
        return 0.5*self.length*self.width
rr = rect()
ss = sphere()
cc = cube()
tt = rectangle_3D()
print("Volume of rectangle = ",rr.volume())
print("Volume of sphere = ",ss.volume())
print("Volume of cube = ",cc.volume())
print("Volume of rectangle = ",tt.volume())
