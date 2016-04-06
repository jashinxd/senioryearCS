# pt(n)
# pt(3) --> []
# pt(4) --> []
# pt(6) --> [[3, 4, 5]]
# pt(7) --> [[3, 4, 5]]
# Returns the pythagorean triples that contain ints less than n

def pt(n):
    i = 0;
    retL = []
    for a in range(1, n):
        for b in range(a + 1, n):
            for c in range(b + 1, n):
                if (a ** 2 + b ** 2 == c ** 2):
                    retL.append([a, b, c])
    return retL

print pt(3)
print pt(4)
print pt(6)
print pt(15)

# Use list comprehensions to do the same thing
def pt2(n):
    return [(a,b,c)
            for a in range(1, n)
            for b in range(a, n)
            for c in range(b, n)
            if a ** 2 + b ** 2 == c ** 2]

print pt2(3)
print pt2(4)
print pt2(6)
print pt2(15)

