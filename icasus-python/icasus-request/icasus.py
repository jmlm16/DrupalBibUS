import requests
import json
import config


def icasus():
    response = requests.request("GET", REQUESTURL, verify=False)
    if response.status_code == 200:
        for var in response.json():
            add_var = "replace variable (name,value) values ('icasus_data_" + var + "','s:" + str(len(str(
                json.loads(response.text)[var]))) + ":\"" + str(json.loads(response.text)[var]) + "\";');"
            config.cursor.execute(add_var)
        config.conn.commit()
        config.cursor.close()
        config.conn.close()


if __name__ == "__main__":
    icasus()
