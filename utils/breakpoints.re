/* import { CSSProperties } from 'glamorous'; */

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

module Selectors = {
  let minWidthQuery = (pixels: int) => {j|@media screen and (min-width: $(pixels)px)|j};
};

/*

 const minWidthQuery = (pixels: number) => `@media screen and (min-width: ${pixels}px)`;

 const makeBreakpointSelector = (bp: Breakpoint) => (styles: (bp: Breakpoint) => CSSProperties) => ({
   [minWidthQuery(bp.viewportWidth)]: styles(bp)
 });

 export const extranarrow = makeBreakpointSelector(breakpoints.extranarrow);
 export const narrow = makeBreakpointSelector(breakpoints.narrow);
 export const normal = makeBreakpointSelector(breakpoints.normal);
 export const wide = makeBreakpointSelector(breakpoints.wide);
 export const extrawide = makeBreakpointSelector(breakpoints.extrawide); */