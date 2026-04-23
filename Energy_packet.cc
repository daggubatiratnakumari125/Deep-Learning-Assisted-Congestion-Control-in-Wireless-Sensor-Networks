import matplotlib.pyplot as plt

packet_size = [100, 200, 300, 500, 1000]
energy = [18.0, 18.5, 19.2, 20.8, 23.5]

plt.plot(packet_size, energy, marker='o')
plt.xlabel("Packet Size (bytes)")
plt.ylabel("Energy Consumption (Joules)")
plt.title("Energy vs Packet Size")
plt.grid()
plt.savefig("energy_packet.png", dpi=300, bbox_inches="tight")
plt.show()
