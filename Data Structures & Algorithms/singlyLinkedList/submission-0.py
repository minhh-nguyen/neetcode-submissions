class LinkedList:
    
    def __init__(self):
        self.elements = []
    
    def get(self, index: int) -> int:
        if index >= len(self.elements):
            return -1

        return self.elements[index]


    def insertHead(self, val: int) -> None:
        temp = []
        temp.append(val)
        for i in range(0, len(self.elements)):
            temp.append(self.elements[i])

        self.elements = temp

    def insertTail(self, val: int) -> None:
        self.elements.append(val)

    def remove(self, index: int) -> bool:
        if index >= len(self.elements): 
            return False

        self.elements.pop(index)
        return True

    def getValues(self) -> List[int]:
        return self.elements
