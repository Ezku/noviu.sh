let Math = Js.Math;

let defaultRatio = Math._E;
let defaultBase = 16;
let defaultStep = 1 / 4;
let defaultOffset = 0;

let nearestRoundNumber = (i: number) => 2 * Math.round(i / 2);

let makeScale =
    (
      ~base=defaultBase,
      ~ratio=defaultRatio,
      ~step=defaultStep,
      ~offset=defaultOffset,
      s: number,
    ) =>
  nearestRoundNumber(base * Math.pow(ratio, (s - offset) * step));

let default = makeScale();
