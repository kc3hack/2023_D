import http from 'k6/http';
import {sleep, check} from 'k6';

export default function () {
    const data = {
        user_uuid: "linebot12",
        room_number: "1"
    }

    const data2 = {
        reaction: "ok",
        user_uuid: "551nikuman",
        pin_uuid: "commit44"
    }

    const data3 = {
        user_uuid: "wind",
    }

    const payload = JSON.stringify(data);
    const payload2 = JSON.stringify(data2)
    const payload3 = JSON.stringify(data3)

    const params = {
        headers: {
            'Content-Type': 'application/json;charset=UTF-8',
        }
    };

    const url = 'http://itoho.ddns.net:5000/arpinpolling'
    const url2 = 'http://itoho.ddns.net:5000/arreactionpolling'
    const url3 = 'http://itoho.ddns.net:5000/reactionadd'

    http.post(url, payload, params);
    // http.post(url3, payload2, params);
    http.post(url2, payload3, params);


    sleep(0.1)
}