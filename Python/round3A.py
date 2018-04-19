try:
    while True:
        s = input().split("+")
        r = s[0]
        split2 = s[1].split("=")
        l = split2[0]
        j = split2[1]
        if r == "R":
            print("{}".format(int(j)-int(l)))
        elif l == "L":
            print("{}".format(int(j)-int(r)))
        elif j == "J":
            print("{}".format(int(r)+int(l)))
except:
    pass

