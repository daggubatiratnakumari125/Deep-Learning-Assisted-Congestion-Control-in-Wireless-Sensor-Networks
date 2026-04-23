import matplotlib.pyplot as plt

packet_size = [100, 200, 300, 500, 1000]
pdr = [100, 99, 98, 96, 93]

plt.plot(packet_size, pdr, marker='o')
plt.xlabel("Packet Size (bytes)")
plt.ylabel("PDR (%)")
plt.title("PDR vs Packet Size")
plt.grid()
plt.savefig("pdr_packet.png", dpi=300, bbox_inches="tight")
plt.show()
