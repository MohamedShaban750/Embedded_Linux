#Current bitcoin using python

import requests
response = requests.get('https://api.coindesk.com/v1/bpi/currentprice.json')
print(response.json()['bpi']['USD'])