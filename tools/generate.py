import logging
import actuator_addresses
import config_addresses
import sensor_addresses

logging.basicConfig(level=logging.INFO)

def run(filename):
    logging.info("Generating actuator addresses")
    actuator_addresses.run(filename)
    logging.info("Generating config addresses")
    config_addresses.run(filename)
    logging.info("Generating sensor addresses")
    sensor_addresses.run(filename)

if __name__ == "__main__":
    run("/mnt/c/Users/Richard/OneDrive/Documents/66Shed/Can Protocol.xlsx")
