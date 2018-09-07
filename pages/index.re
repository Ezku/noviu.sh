let component = ReasonReact.statelessComponent("Index");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <h1>
      (ReasonReact.string("Hello world!.re"))
    </h1>
};

let default = ReasonReact.wrapReasonForJs(~component, (_jsProps) => make([||]));
