from ise_ph import ise_ph

ph = ise_ph(0x3f, -1, 5, 4)

ph.measurepH()
print("mV: " + str(ph.mV))
print("pH: " + str(ph.pH))
print("pOH: " + str(ph.pOH))
