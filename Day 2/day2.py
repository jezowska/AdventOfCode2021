### ADVENT OF CODE 2021 ###
### DAY 2 ###

# https://adventofcode.com/2021/day/2 
# Daria Jeżowska, 252731


depth = 0 
depth2 = 0 #zmienna depth na potrzeby drugiego zadania
forward = 0

### PART ONE ###
#zmiena depth z pierwszej części zadania jest tak naprawdę tym samym co zmienna aim w drugim
# z tego powodu nie tworzyłam zmiennej aim

with open("input.txt") as file:
    for line in file:
        line = line.split(" ")
        
        if(line[0] == 'down'): 
            depth += int(line[1])
        elif(line[0] == 'forward'):
            forward +=int(line[1])
            depth2 += depth*int(line[1])
        elif(line[0] == 'up'):
            depth -= int(line[1])
    
print("Part one:")
print("Depth: " + str(depth))
print("Forward: " + str(forward))

### PART TWO ###

print("\n")
print("Part two")
print("Depth: " + str(depth2))
print("Forward: " + str(forward))
print("depth: " + str(depth))

        
    
