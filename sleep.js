let addon = require('bindings')('sleep');

console.log("begin sleep")
addon.waitSync(1000);
console.log("end sleep")
let i = 0
while (i < 10) {
    let date = new Date()
    addon.waitSync(1000);
    console.log(date)
}

