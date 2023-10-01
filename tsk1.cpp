class Vehicle:
    def __init__(self, wheels, range):
        self.wheels = wheels
        self.range = range

    def display_info(self):
        print("Wheels:", self.wheels)
        print("Range:", self.range)


class Car(Vehicle):
    def __init__(self, wheels, range, passengers):
        super().__init__(wheels, range)
        self.passengers = passengers

    def display_info(self):
        print("Car:")
        super().display_info()
        print("Passengers:", self.passengers)


class Truck(Vehicle):
    def __init__(self, wheels, range, load_limit):
        super().__init__(wheels, range)
        self.load_limit = load_limit

    def display_info(self):
        print("Truck:")
        super().display_info()
        print("Load Limit:", self.load_limit)


if __name__ == "__main__":
    c = Car(4, 500, 5)
    t = Truck(12, 1200, 3000)

    c.display_info()
    print()
    t.display_info()

