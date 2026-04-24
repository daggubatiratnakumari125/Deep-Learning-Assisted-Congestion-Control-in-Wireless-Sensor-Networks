import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("results_traffic.csv", header=None)

traffic = [500, 800, 1000, 1200, 1500, 1800]

proposed = data[5]

b1 = [19, 19.5, 20.5, 21.5, 22.5, 23.5]
b2 = [19.5, 20, 21, 22, 23, 24]
b3 = [20, 20.5, 21.5, 22.5, 23.5, 24.5]
b4 = [20.5, 21, 22, 23, 24, 25]
b5 = [21, 21.5, 22.5, 23.5, 24.5, 25.5]

plt.plot(traffic, proposed, marker='o', label='Proposed')
plt.plot(traffic, b1, marker='o', label='RPL-AI')
plt.plot(traffic, b2, marker='o', label='ACO-Routing')
plt.plot(traffic, b3, marker='o', label='DGRL-Routing')
plt.plot(traffic, b4, marker='o', label='EEOM-Routing')
plt.plot(traffic, b5, marker='o', label='Gauss-Markov')

plt.xlabel("Traffic Load (Packets)")
plt.ylabel("Energy Consumption (Joules)")
plt.title("Energy Consumption versus Traffic Load (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("energy_traffic_compare.jpg", dpi=300)

print("Graph saved as energy_traffic_compare.jpg")
plt.show()
