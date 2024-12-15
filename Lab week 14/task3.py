def totalOvers(balls):
    overs = balls // 6
    remaining_balls = balls % 6
    total = overs + remaining_balls / 10
    return total

balls = int(input("Enter number of bolls: "))
print("Number of overs: ", totalOvers(balls))