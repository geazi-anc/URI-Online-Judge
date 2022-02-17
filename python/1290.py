## Time limit exceeded ou wrong answer 100%

##### CLASSES #####
class Box:

    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
        self.volume = x*y*z


class Stock:

    def __init__(self):
        self.__stocked_boxes = []

    def add(self, box):
        self.__stocked_boxes.append(box)

    def check_quantity(self, qty, prod):
        equal_sizes = [len([ibox for ibox in self.__stocked_boxes if ibox.volume ==
                            box.volume]) for box in self.__stocked_boxes if box.volume >= prod.volume]

        for group in set(equal_sizes):
            if group >= qty:
                return True

        return False
#        return True if qty in [len(group) for group in equal_sizes] else False

    def sort_stock(self):
        self.__stocked_boxes.sort(key=lambda x: x.volume)

    def smallest_box(self, qty, prod):
        smallest_box = [
            box for box in self.__stocked_boxes if box.volume >= prod.volume][0]

        return smallest_box


##### MAIN #####
while True:
    (order, stock_qty) = [int(arg) for arg in input().split(" ")]
    if order == 0:
        break

    prod_dimension = [int(dimension) for dimension in input().split(" ")]
    prod = Box(*prod_dimension)
    stock = Stock()

    for i in range(stock_qty):
        line = [int(dimension) for dimension in input().split(" ")]
        box=Box(*line)

        if not box.volume < prod.volume:
            stock.add(Box(*line))





    # então verifica
    if stock_qty == 0 or not stock.check_quantity(order, prod):
        print("impossible")
        continue

    # então
    stock.sort_stock()
    smallest_box = stock.smallest_box(order, prod)
    remaining_volume = smallest_box.volume-prod.volume

    print(f"{remaining_volume}")
