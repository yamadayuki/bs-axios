type configWithUrl = {. "url": string};

type config = Js.t({.});

type transformer('a, 'b) = 'a => 'b;

type paramsSerializer('a) = Js.t('a) => string;

type response('a, 'b) = {
  .
  "data": 'a,
  "status": int,
  "statusText": string,
  "headers": Js.t('b),
  "config": config
};

type auth = {
  .
  "username": string,
  "password": string
};

type adapter('a, 'b) = config => Js.Promise.t(response('a, 'b));

type proxy = {
  .
  "host": int,
  "port": int,
  "auth": auth
};

type onProgress('a) = Js.t('a) => unit;

type validateStatus = int => bool;
