import matplotlib.pyplot as plt

packet_size = [100, 200, 300, 500, 1000]
delay = [0.001, 0.002, 0.003, 0.005, 0.007]

plt.plot(packet_size, delay, marker='o')
plt.xlabel("Packet Size (bytes)")
plt.ylabel("End-to-End Delay (seconds)")
plt.title("End-to-End Delay vs Packet Size")
plt.grid()
plt.savefig("delay_packet.png", dpi=300, bbox_inches="tight")
plt.show()
