import matplotlib.pyplot as plt

traffic = [500, 800, 1000, 1200, 1500, 1800]

proposed = [20, 32, 40, 38, 34, 30]

b1 = [18, 30, 35, 32, 30, 28]
b2 = [17, 29, 34, 31, 29, 27]
b3 = [16, 28, 33, 30, 28, 26]
b4 = [15, 27, 32, 29, 27, 25]
b5 = [14, 26, 31, 28, 26, 24]

plt.plot(traffic, proposed, marker='o', label='Proposed')
plt.plot(traffic, b1, marker='o', label='RPL-AI')
plt.plot(traffic, b2, marker='o', label=' ACO-Routing')
plt.plot(traffic, b3, marker='o', label='DGRL-Routing')
plt.plot(traffic, b4, marker='o', label='EEOM-Routing')
plt.plot(traffic, b5, marker='o', label=' Gauss-Markov')

plt.xlabel("Traffic Load (Packets)")
plt.ylabel("Throughput (Kbps)")
plt.title("Throughput versus Traffic Load (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("throughput_traffic_compare.jpg", dpi=300)
plt.show()
