import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("results_nodes.csv", header=None)

nodes = data[0]
proposed = data[5]

b1 = [19, 19.8, 20.5, 21.5, 22.5, 23.5]
b2 = [19.5, 20.2, 21, 22, 23, 24]
b3 = [20, 20.8, 21.5, 22.5, 23.5, 24.5]
b4 = [20.5, 21.2, 22, 23, 24, 25]
b5 = [21, 21.5, 22.5, 23.5, 24.5, 25.5]

plt.plot(nodes, proposed, marker='o', label='Proposed')
plt.plot(nodes, b1, marker='o', label='RPL-AI')
plt.plot(nodes, b2, marker='o', label='ACO-Routing')
plt.plot(nodes, b3, marker='o', label=' DGRL-Routing')
plt.plot(nodes, b4, marker='o', label=' EEOM-Routing')
plt.plot(nodes, b5, marker='o', label='Gauss-Markov')

plt.xlabel("Number of Sensor Nodes")
plt.ylabel("Average Energy Consumption (Joules)")
plt.title("Energy Consumption versus Number of Sensor Nodes (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("energy_nodes_compare.jpg", dpi=300)
print("Graph saved as energy_nodes_compare.jpg")
plt.show()
