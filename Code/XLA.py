import cmath
x = int(input())
y = int(input())
# Calculate the expression
result = (
      5.00 * cmath.exp(-1j * ((x * 0)/3 + (y * 0)/3))
    + 7.00 * cmath.exp(-1j * ((x * 0)/3 + (y * 1)/3))
    + 1.00 * cmath.exp(-1j * ((x * 0)/3 + (y * 2)/3))
    + 6.00 * cmath.exp(-1j * ((x * 1)/3 + (y * 0)/3))
    + 4.00 * cmath.exp(-1j * ((x * 1)/3 + (y * 1)/3))
    + 3.00 * cmath.exp(-1j * ((x * 1)/3 + (y * 2)/3))
    + 6.00 * cmath.exp(-1j * ((x * 2)/3 + (y * 0)/3))
    + 1.00 * cmath.exp(-1j * ((x * 2)/3 + (y * 1)/3))
    + 4.00 * cmath.exp(-1j * ((x * 2)/3 + (y * 2)/3))
)

# Print the result
print(f"F({x},{y}) = {result:.2f}")