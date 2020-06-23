# waitSync

node version >=v12.18.1
inspired by [time](https://github.com/nodejs/node/pull/30784) and [node-sleep](https://github.com/erikdubbelboer/node-sleep)

## rebuild 
```c++
node-gyp rebuild // rebuild the Napi code.
```
## run
```js
node sleep.js
```
[link](https://github.com/nodejs/node/pull/30784#issuecomment-561735418)
> blocking the main event loop thread for arbitrarily long periods of time...

