/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    const ans = [];
    // Edge Case:
    if (strs.length <= 1) return [strs];
    // Other Case:
    //[key, value] => [String, [Array]]
    const h = new Map();

    for (let str of strs) {
        // Getting the Code:
        let code = getCode(str);

        // Cheking/Matching the code:
        if (h.has(code)) {
            h.get(code).push(str);
        } else {
            const arr = [str];
            h.set(code, arr);
        }
    }

    // Putting the Results in the
    h.forEach((val, key) => {
        ans.push(val);
    });

    return ans;
};

let getCode = (str) => {
    // Calculating the Frequency:
    // [key, value] => [character, count]
    const map = new Map();

    // Counting the Frequency:
    for (let ch of str) {
        if (map.has(ch)) {
            let currVal = map.get(ch) + 1;
            map.set(ch, currVal);
        } else {
            map.set(ch, 1);
        }
    }

    // Cheating a unique String:
    let ans = "";
    for (let s = 97; s <= 122; s++) {
        let ch = String.fromCharCode(s);
        if (map.has(ch)) {
            ans += ch + map.get(ch);
        }
    }

    return ans;
};

// debugger;
// const ans = groupAnagrams(["ddddddddddg", "dgggggggggg"]);
// console.log(ans);
