let component = ReasonReact.statelessComponent("Index");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      (ReasonReact.string("Hello world!.re"))
    </div>
};

let default = ReasonReact.wrapReasonForJs(~component, (_jsProps) => make([||]));
