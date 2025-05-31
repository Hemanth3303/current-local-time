from datetime import datetime

currentTime = datetime.now()

print(currentTime.strftime("24 Hour format: %Y-%m-%d %H:%M:%S"))
print(currentTime.strftime("12 Hour format: %Y-%m-%d %I:%M:%S %p"))