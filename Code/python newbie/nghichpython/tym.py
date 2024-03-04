import turtle
f = turtle.Pen();

col = input()
f.fillcolor(col)
f.begin_fill()

f.left(45)
f.forward(200)
for i in range(10):
    f.left(7)
    f.forward(10)
for i in range(20):
    f.left (7)
    f.forward(11)
f.left(205)
for i in range(20):
    f.left(7)
    f.forward(11)
for i in range(10):
    f.left (8)
    f.forward(10)
f.forward(215)
f.end_fill()
turtle.done()