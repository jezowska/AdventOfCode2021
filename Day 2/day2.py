depth = 0
depth2 = 0
forward = 0
aim = 0

### PART ONE ###
with open("input.txt") as file:
    for line in file:
        line = line.split(" ")
        
        if(line[0] == 'down'): 
            depth += int(line[1])
            aim   += int(line[1])
        elif(line[0] == 'forward'):
            forward +=int(line[1])
            depth2 += aim*int(line[1])
        elif(line[0] == 'up'):
            depth -= int(line[1])
            aim   -= int(line[1])
    
print("Part one:")
print("Depth: " + str(depth))
print("Forward: " + str(forward))

### PART TWO ###
print("\n")
print("Part two")
print("Depth: " + str(depth2))
print("Forward: " + str(forward))
print("Aim: " + str(aim))

        
    
