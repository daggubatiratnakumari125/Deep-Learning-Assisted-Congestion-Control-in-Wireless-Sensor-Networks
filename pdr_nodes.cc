import matplotlib.pyplot as plt

nodes = [10, 20, 30, 40, 50, 60]
pdr = [100, 98, 95, 90, 92, 91]

plt.plot(nodes, pdr, marker='o')
plt.xlabel("Number of Nodes")
plt.ylabel("Packet Delivery Ratio (%)")
plt.title("Packet Delivery Ratio vs Number of Nodes")
plt.grid()
plt.savefig("pdr_nodes.png", dpi=300, bbox_inches="tight")
plt.show()
