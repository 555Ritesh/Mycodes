#Python

print(0)
print(1)
count = 2

n = int(input("Enter a number : "))
def fibonacci(prev1, prev2):
    global count
    if count <= n:
        newFibo = prev1 + prev2
        print(newFibo)
        prev1 = prev2
        prev2 = newFibo
        count += 1
        fibonacci(prev1, prev2)
    else:
        return

fibonacci(0,1)
