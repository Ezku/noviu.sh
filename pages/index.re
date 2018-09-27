let component = ReasonReact.statelessComponent("Index");

module Styles = {
  let container =
    Emotion.Style.make(
      ReactDOMRe.Style.make(
        ~minHeight="100vh",
        ~display="flex",
        ~alignItems="center",
        ~justifyContent="center",
        ~flexDirection="column",
        (),
      ),
    );

  let header =
    Emotion.Style.make(
      ReactDOMRe.Style.make(
        ~fontSize="32px",
        ~fontWeight="400",
        ~letterSpacing="0.03em",
        ~color="rgba(255, 255, 255, 0.99)",
        ~backgroundColor="#045de9",
        ~backgroundImage="linear-gradient(315deg, #045de9 0%, #09c6f9 74%)",
        ~textShadow="1px 1px rgba(0,0,0, 0.9)",
        ~boxShadow="3px 3px 3px rgba(0,0,0,0.0618)",
        ~padding="1.618rem",
        ~borderRadius="4px",
        (),
      ),
    );
};

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <h1 className=Styles.header> {ReasonReact.string("novius.house")} </h1>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));