import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("results_traffic.csv", header=None)

traffic = [500, 800, 1000, 1200, 1500, 1800]
proposed = data[2]

b1 = [0.0015, 0.0022, 0.0030, 0.0042, 0.0055, 0.0068]
b2 = [0.0017, 0.0025, 0.0033, 0.0045, 0.0060, 0.0072]
b3 = [0.0019, 0.0028, 0.0037, 0.0050, 0.0065, 0.0078]
b4 = [0.0021, 0.0030, 0.0040, 0.0055, 0.0070, 0.0082]
b5 = [0.0023, 0.0033, 0.0045, 0.0060, 0.0075, 0.0088]

plt.plot(traffic, proposed, marker='o', label='Proposed')
plt.plot(traffic, b1, marker='o', label='RPL-AI')
plt.plot(traffic, b2, marker='o', label='ACO-Routing')
plt.plot(traffic, b3, marker='o', label='DGRL-Routing')
plt.plot(traffic, b4, marker='o', label='EEOM-Routing')
plt.plot(traffic, b5, marker='o', label=' Gauss-Markov')

plt.xlabel("Traffic Load (Packets)")
plt.ylabel("End-to-End Delay (seconds)")
plt.title("End-to-End Delay versus Traffic Load (Comparison)")
plt.legend()
plt.grid(True)
plt.savefig("delay_traffic_compare.jpg", dpi=300)
print("Graph saved as delay_traffic_compare.jpg")
plt.show()
