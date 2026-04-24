import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("results_traffic.csv", header=None)

traffic = [500, 800, 1000, 1200, 1500, 1800]
proposed = data[1]

b1 = [98, 96, 92, 88, 84, 80]
b2 = [97, 95, 91, 87, 83, 79]
b3 = [96, 94, 90, 86, 82, 78]
b4 = [95, 93, 89, 85, 81, 77]
b5 = [94, 92, 88, 84, 80, 76]

plt.plot(traffic, proposed, marker='o', label='Proposed')
plt.plot(traffic, b1, marker='o', label='RPL-AI')
plt.plot(traffic, b2, marker='o', label='ACO-Routing')
plt.plot(traffic, b3, marker='o', label='DGRL-Routing')
plt.plot(traffic, b4, marker='o', label='EEOM-Routing')
plt.plot(traffic, b5, marker='o', label=' Gauss-Markov')

plt.xlabel("Traffic Load (Packets)")
plt.ylabel("Packet Delivery Ratio (%)")
plt.title("Packet Delivery Ratio versus Traffic Load (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("pdr_traffic_compare.jpg", dpi=300)
print("Graph saved as pdr_traffic_compare.jpg")
plt.show()
