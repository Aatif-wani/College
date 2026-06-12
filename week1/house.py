import numpy as np
import matplotlib.pyplot as plt

# Training data
x_train = np.array([1.0, 2.0])   # house sizes (1000 sqft)
y_train = np.array([300.0, 500.0])  # house prices (1000s of dollars)

# Print training data
print(f"x_train = {x_train}")
print(f"y_train = {y_train}")

# Number of training examples
m = x_train.shape[0]
print(f"Number of training examples: m = {m}")

# Model parameters
w = 200  # weight (slope)
b = 100  # bias (intercept)
print(f"w = {w}, b = {b}")


# Function to compute model output f(x) = wx + b
def compute_model_output(x, w, b):
    """
    Computes the prediction of a linear model
    Args:
      x (ndarray (m,)): Data, m examples
      w,b (scalar)    : model parameters
    Returns
      f_wb (ndarray (m,)): model prediction
    """
    m = x.shape[0]
    f_wb = np.zeros(m)
    for i in range(m):
        f_wb[i] = w * x[i] + b
    return f_wb


# Compute predictions
tmp_f_wb = compute_model_output(x_train, w, b)
print(f"Predictions: {tmp_f_wb}")

# Plot the graph
plt.plot(x_train, tmp_f_wb, c='b', label='Our Prediction')       # blue line
plt.scatter(x_train, y_train, marker='x', c='r', label='Actual Values')  # red X marks

plt.title("Housing Prices")
plt.ylabel('Price (in 1000s of dollars)')
plt.xlabel('Size (1000 sqft)')
plt.legend()
plt.show()