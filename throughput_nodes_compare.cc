import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("results_nodes.csv", header=None)

nodes = data[0]
proposed = data[4]

b1 = [38, 36, 34, 32, 31, 30]
b2 = [37, 35, 33, 31, 30, 29]
b3 = [36, 34, 32, 30, 29, 28]
b4 = [35, 33, 31, 29, 28, 27]
b5 = [34, 32, 30, 28, 27, 26]

plt.plot(nodes, proposed, marker='o', label='Proposed')
plt.plot(nodes, b1, marker='o', label='RPL-AI')
plt.plot(nodes, b2, marker='o', label='ACO-Routing')
plt.plot(nodes, b3, marker='o', label='DGRL-Routing')
plt.plot(nodes, b4, marker='o', label='EEOM-Routing')
plt.plot(nodes, b5, marker='o', label='Gauss-Markov')

plt.xlabel("Number of Sensor Nodes")
plt.ylabel("Throughput (Kbps)")
plt.title("Throughput versus Number of Sensor Nodes (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("throughput_nodes_compare.jpg", dpi=300)
print("Graph saved as throughput_nodes_compare.jpg")
plt.show()

