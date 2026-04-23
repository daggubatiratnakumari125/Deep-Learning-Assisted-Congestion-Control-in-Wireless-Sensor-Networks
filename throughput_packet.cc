import matplotlib.pyplot as plt

packet_size = [100, 200, 300, 500, 1000]
throughput = [18, 22, 26, 32, 39]

plt.plot(packet_size, throughput, marker='o')
plt.xlabel("Packet Size (bytes)")
plt.ylabel("Throughput (kbps)")
plt.title("Throughput vs Packet Size")
plt.grid()
plt.savefig("throughput_packet.png", dpi=300, bbox_inches="tight")
plt.show()
