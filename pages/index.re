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
        ~backgroundColor="#2876f9",
        ~backgroundImage="linear-gradient(315deg, #2876f9 0%, #6d17cb 74%)",
        ()
      )
    );
  let header =
    Emotion.Style.make(
      ReactDOMRe.Style.make(
        ~fontFamily="neue-haas-unica",
        ~fontSize="2rem",
        ~fontWeight="300",
        ~letterSpacing="0.0618em",
        ~color="rgba(255, 255, 255, 0.99)",
        ~border="2px solid rgba(255, 255, 255, 0.99)",
        ~padding="0.618rem 1.618rem 0.918rem",
        ~borderRadius="0.1875em",
        ()
      )
    );
  let names =
    Emotion.Style.make(
      ReactDOMRe.Style.make(~padding="0.618rem 1.618rem 0.918rem", ())
    );
  let name =
    Emotion.Style.make(
      ReactDOMRe.Style.make(
        ~fontFamily="neue-haas-unica",
        ~fontSize="1rem",
        ~fontWeight="300",
        ~letterSpacing="0.0271em",
        ~color="rgba(255, 255, 255, 0.99)",
        ~margin="0.618rem",
        ~textAlign="center",
        ()
      )
    );
};

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <h1 className=Styles.header> (ReasonReact.string("novius.house")) </h1>
      <ul className=Styles.names>
        <li className=Styles.name> (ReasonReact.string("Anna Novius")) </li>
        <li className=Styles.name> (ReasonReact.string("Eevert Novius")) </li>
      </ul>
    </div>
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));