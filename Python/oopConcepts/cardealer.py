
class Carinfo: 
    def __init__(self):  #this is what takes the input
        self.name = input('Enter the name of the car: ')
        self.model = input('Enter the model of the car: ')
        self.year = input('Enter the year of the car: ')
        self.price = input('Enter the price of the car: ')


    def car(self):  #displays the info
        print('Name: ', self.name)
        print('Model: ', self.model)
        print('Year: ', self.year)
        print('Price: ', self.price)

i=1

while i<=3:  #keeps calling the funtion until we get three cars
    car = Carinfo()
    car.car()
    i+=1

