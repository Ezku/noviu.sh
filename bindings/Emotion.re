module Style = {
  type t = string;
  [@bs.module "emotion"] external make: ReactDOMRe.Style.t => t = "css";
  [@bs.module "emotion"] [@bs.splice]
  external combine: array(ReactDOMRe.Style.t) => t = "css";
};