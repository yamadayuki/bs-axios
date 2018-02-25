module Type = Axios_type;

module Instance = Axios_instance;

open Type;

[@bs.obj]
external makeConfig :
  (
    ~url: string=?,
    ~_method: string=?,
    ~baseURL: string=?,
    ~transformRequest: transformer('a, 'b)=?,
    ~headers: Js.t('headers)=?,
    ~params: Js.t('params)=?,
    ~paramsSerializer: paramsSerializer('params)=?,
    ~data: Js.t('data)=?,
    ~timeout: int=?,
    ~withCredentials: Js.boolean=?,
    ~adapter: adapter('a, 'b)=?,
    ~auth: auth=?,
    ~responseType: string=?,
    ~xsrfCookieName: string=?,
    ~xsrfHeaderName: string=?,
    ~onUploadProgress: onProgress('uploadProgress)=?,
    ~onDownloadProgress: onProgress('downloadProgress)=?,
    ~maxContentLength: int=?,
    ~validateStatus: validateStatus=?,
    ~maxRedirects: int=?,
    ~proxy: proxy=?,
    unit
  ) =>
  config =
  "";

[@bs.obj]
external makeConfigWithUrl :
  (
    ~url: string,
    ~_method: string=?,
    ~baseURL: string=?,
    ~transformRequest: transformer('a, 'b)=?,
    ~headers: Js.t('headers)=?,
    ~params: Js.t('params)=?,
    ~paramsSerializer: paramsSerializer('params)=?,
    ~data: Js.t('data)=?,
    ~timeout: int=?,
    ~withCredentials: Js.boolean=?,
    ~adapter: adapter('a, 'b)=?,
    ~auth: auth=?,
    ~responseType: string=?,
    ~xsrfCookieName: string=?,
    ~xsrfHeaderName: string=?,
    ~onUploadProgress: onProgress('uploadProgress)=?,
    ~onDownloadProgress: onProgress('downloadProgress)=?,
    ~maxContentLength: int=?,
    ~validateStatus: validateStatus=?,
    ~maxRedirects: int=?,
    ~proxy: proxy=?,
    unit
  ) =>
  configWithUrl =
  "";

[@bs.module "axios"]
external all :
  array(Js.Promise.t(response(_, _))) => Js.Promise.t(array(response(_, _))) =
  "";

[@bs.module "axios"]
external all2 :
  ((Js.Promise.t(response('a0, 'b0)), Js.Promise.t(response('a1, 'b1)))) =>
  Js.Promise.t((response('a0, 'b0), response('a1, 'b1))) =
  "all";

[@bs.module "axios"]
external all3 :
  (
    (
      Js.Promise.t(response('a0, 'b0)),
      Js.Promise.t(response('a1, 'b1)),
      Js.Promise.t(response('a2, 'b2))
    )
  ) =>
  Js.Promise.t((response('a0, 'b0), response('a1, 'b1), response('a2, 'b2))) =
  "all";

[@bs.module "axios"]
external all4 :
  (
    (
      Js.Promise.t(response('a0, 'b0)),
      Js.Promise.t(response('a1, 'b1)),
      Js.Promise.t(response('a2, 'b2)),
      Js.Promise.t(response('a3, 'b3))
    )
  ) =>
  Js.Promise.t(
    (
      response('a0, 'b0),
      response('a1, 'b1),
      response('a2, 'b2),
      response('a3, 'b3)
    )
  ) =
  "all";

[@bs.module "axios"]
external all5 :
  (
    (
      Js.Promise.t(response('a0, 'b0)),
      Js.Promise.t(response('a1, 'b1)),
      Js.Promise.t(response('a2, 'b2)),
      Js.Promise.t(response('a3, 'b3)),
      Js.Promise.t(response('a4, 'b4))
    )
  ) =>
  Js.Promise.t(
    (
      response('a0, 'b0),
      response('a1, 'b1),
      response('a2, 'b2),
      response('a3, 'b3),
      response('a4, 'b4)
    )
  ) =
  "all";

[@bs.module "axios"]
external all6 :
  (
    (
      Js.Promise.t(response('a0, 'b0)),
      Js.Promise.t(response('a1, 'b1)),
      Js.Promise.t(response('a2, 'b2)),
      Js.Promise.t(response('a3, 'b3)),
      Js.Promise.t(response('a4, 'b4)),
      Js.Promise.t(response('a5, 'b5))
    )
  ) =>
  Js.Promise.t(
    (
      response('a0, 'b0),
      response('a1, 'b1),
      response('a2, 'b2),
      response('a3, 'b3),
      response('a4, 'b4),
      response('a5, 'b5)
    )
  ) =
  "all";

[@bs.module "axios"]
external request : unit => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external get : string => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external getWithConfig : (string, config) => Js.Promise.t(response('a, 'b)) =
  "get";

[@bs.module "axios"]
external delete : string => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external deleteWithConfig : (string, config) => Js.Promise.t(response('a, 'b)) =
  "delete";

[@bs.module "axios"]
external post : string => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external postWithConfig : (string, config) => Js.Promise.t(response('a, 'b)) =
  "post";

[@bs.module "axios"]
external postData : (string, Js.t('a)) => Js.Promise.t(response('b, 'c)) =
  "post";

[@bs.module "axios"]
external postDataWithConfig :
  (string, Js.t('a), config) => Js.Promise.t(response('b, 'c)) =
  "post";

[@bs.module "axios"]
external put : string => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external putWithConfig : (string, config) => Js.Promise.t(response('a, 'b)) =
  "put";

[@bs.module "axios"]
external putData : (string, Js.t('a)) => Js.Promise.t(response('b, 'c)) =
  "put";

[@bs.module "axios"]
external putDataWithConfig :
  (string, Js.t('a), config) => Js.Promise.t(response('b, 'c)) =
  "put";

[@bs.module "axios"]
external patch : string => Js.Promise.t(response('a, 'b)) = "";

[@bs.module "axios"]
external patchWithConfig : (string, config) => Js.Promise.t(response('a, 'b)) =
  "patch";

[@bs.module "axios"]
external patchData : (string, Js.t('a)) => Js.Promise.t(response('b, 'c)) =
  "patch";

[@bs.module "axios"]
external patchDataWithConfig :
  (string, Js.t('a), config) => Js.Promise.t(response('b, 'c)) =
  "patch";
