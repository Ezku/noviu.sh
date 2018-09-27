module Breakpoint = {
  type t = {
    contentWidth: int,
    gutterWidth: int,
    viewportWidth: int,
  };

  let make = (~contentWidth: int, ~gutterWidth: int=32, ()): t => {
    contentWidth,
    gutterWidth,
    viewportWidth: contentWidth + gutterWidth * 2,
  };
};

let extranarrow = Breakpoint.make(~contentWidth=300, ~gutterWidth=10, ());
let narrow = Breakpoint.make(~contentWidth=576, ());
let normal = Breakpoint.make(~contentWidth=768, ());
let wide = Breakpoint.make(~contentWidth=960, ());
let extrawide = Breakpoint.make(~contentWidth=1152, ());