from unittest import result
from zeep import Client

data_client = Client('http://localhost:8000/?wsdl')
all_customer_data = data_client.service.listAllCustomers()

print(all_customer_data)