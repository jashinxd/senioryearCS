def memoize(f):
    # Cache dictionary
    memo = {}
    def inner(x):
        # Test if f(x) was already run. If not, store it in memo.
        if x not in memo:
            memo[x] = f(x)
        return memo[x]
    return inner

@memoize
def fib(n):
    # Base case
    if n < 2:
        return n
    return fib(n-1) + fib(n-2)

print fib(5)
print fib(4)
