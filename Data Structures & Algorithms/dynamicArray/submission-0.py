class DynamicArray:
    
    def __init__(self, capacity: int):
        self.size = 0
        self.elements = [0] * capacity
        self.capacity = capacity

    def get(self, i: int) -> int:
        return self.elements[i]

    def set(self, i: int, n: int) -> None:
        self.elements[i] = n

    def pushback(self, n: int) -> None:
        if self.size == self.capacity:
            self.resize()
        self.elements[self.size] = n
        self.size += 1

    def popback(self) -> int:
        self.size -= 1
        return self.elements[self.size]

    def resize(self) -> None:
        self.capacity = self.capacity * 2
        new_elements = [0] * self.capacity

        for i in range(self.size):
            new_elements[i] = self.elements[i]
        self.elements = new_elements 

    def getSize(self) -> int:
        return self.size
    
    def getCapacity(self) -> int:
        return self.capacity