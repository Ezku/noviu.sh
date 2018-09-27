let component = ReasonReact.statelessComponent("Index");

module Styles = {
  let container =
    Emotion.Style.make(ReactDOMRe.Style.make(~color="red", ()));
};

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <h1> {ReasonReact.string("Hello world!.re")} </h1>
      <p> {ReasonReact.string("Yes, hello!")} </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));