let component = ReasonReact.statelessComponent("Index");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> {ReasonReact.string("Hello world!.re")} </h1>
      <p> {ReasonReact.string("Yes, hello!")} </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
