yr, mon = input().split()
yr = int(yr)
mon = int(mon)
runvar = False              #该变量的值用来判定是否为闰年
days = 0


def run():
    global runvar
    yr1 = yr % 100
    
    if yr1 != 0:
        if yr % 4 == 0:
            runvar = True
        else:
            runvar = False
    
    elif yr1 == 0:
        if yr % 400 != 0:
            runvar = False
        else:
            runvar = True



def day():
    global days
    if mon == 2:
        if runvar == True:
            days = 29
        else:
            days = 28
    elif mon == 1 or mon == 3 or mon == 5 or mon == 7 or mon == 8 or mon == 10 or mon == 12:
        days = 31
    else:
        days = 30


run()
day()
print(str(days))
