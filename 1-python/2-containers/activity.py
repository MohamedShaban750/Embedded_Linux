import requests
r = requests.get("https://www.boredapi.com/api/activity")
print(r)
print(r.content)
# print(r.json()['activity'])