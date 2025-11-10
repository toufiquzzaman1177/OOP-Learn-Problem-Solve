import numpy as np
import matplotlib.pyplot as plt

def f(x):
    return x**2 - x - 1

def g(x):
    return np.sqrt(x + 1)

def fixed_point_iteration(x0, tol, max_iter):
    x = x0
    for i in range(max_iter):
        x_new = g(x)
        if abs(x_new - x) < tol:
            return x_new
        x = x_new
    return None, max_iter


x0 = 2
tol = 1e-10
max_iter = 100


root = fixed_point_iteration(x0, tol, max_iter)


print(f"Root: {root}")



x = np.linspace(0, 2, 1000)
y = f(x)

plt.figure(figsize=(10, 6))
plt.plot(x, y, label='f(x) = x^2 - x - 1', color='blue')
plt.axhline(0, color='black', lw=0.5, ls='--')
plt.axvline(root, color='red', lw=0.5, ls='--', label=f'Root at x={root}')
plt.title('Fixed-Point Iteration for f(x) = x^2 - x - 1')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.grid()
plt.legend()
plt.show()