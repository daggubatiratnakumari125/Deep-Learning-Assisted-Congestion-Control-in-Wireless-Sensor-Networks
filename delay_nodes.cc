import matplotlib.pyplot as plt

nodes = [10, 20, 30, 40, 50, 60]
delay = [0.001, 0.0015, 0.002, 0.0028, 0.0035, 0.004]

plt.plot(nodes, delay, marker='o')
plt.xlabel("Number of Nodes")
plt.ylabel("End-to-End Delay (seconds)")
plt.title("End-to-End Delay vs Number of Nodes")
plt.grid()
plt.savefig("delay_nodes.png", dpi=300, bbox_inches="tight")
plt.show()
