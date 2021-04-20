big=-99999
small=+99999

while 1:
    val=input()
    try:
       if int(val)>big:
            big=int(val)
       if int(val)<small:
            small=int(val)
    except:
        
        if val=="done":
            break
        else:
            print("Invalid Input")
    
print(big)
print(small)
