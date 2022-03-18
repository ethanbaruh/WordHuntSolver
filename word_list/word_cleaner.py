"""
Cleans up word list to WordHunt standards, only 3 or more letter words
"""

UNCLEAN_PATH = "enable1.txt"
CLEAN_PATH = "words.txt"

unclean = open(UNCLEAN_PATH, "r")
clean = open(CLEAN_PATH, "w")

# Iterate over lines and if line has more than 3 letters add it to clean file
while True:
    line = unclean.readline()
    if (len(line) - 1 >= 3):
        clean.writelines(line)

    if not line:
        break

unclean.close()
clean.close()
