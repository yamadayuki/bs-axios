# bs-axios

`url` module bindings for [BuckleScript](https://github.com/bloomberg/bucklescript) in [Reason](https://github.com/facebook/reason).

# Installation

1. Install `@yamadayuki/bs-axios`

```sh
$ npm install --save @yamadayuki/bs-axios
```

2. Add `@yamadayuki/bs-axios` to `bs-dependencies` section of `bsconfig.json`.

# Usage

Perfoming a `GET` request

```reason
open Js.Promise;

Axios.get("/users?id=12345")
|> then_(res => resolve(Js.log(res##data)))
|> catch(err => resolve(Js.log(err)))

/* With config for authentication */
Axios.getWithConfig("/users?id=12345", Axios.makeConfig(~auth={"username": "foo", "password": "bar"}, ()))
|> then_(res => resolve(Js.log(res##data)))
|> catch(err => resolve(Js.log(err)))
```

Performing a `POST` request

```reason
open Js.Promise;

postData("/users", {"firstName": "Fred", "lastName": "Flintstone"})
|> then_(res => resolve(Js.log(res##data)))
|> catch(err => resolve(Js.log(err)))
```

# TODO

* Support `axios.spread`
* Consider Interceptors

# Contributing

### Build

```
npm run build
```

### Build + Watch

```
npm run start
```

### Editor

If you use `vscode`, Press `Windows + Shift + B` it will build automatically
