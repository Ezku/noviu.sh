let defaultRatio = Js.Math._E;
let defaultBase = 16;
let defaultStep = 0.25;
let defaultOffset = 0;

let nearestEvenNumber = (number: float): int =>
  2 * int_of_float(Js.Math.round(number /. 2.));

let makeScale =
    (
      ~base=defaultBase,
      ~ratio=defaultRatio,
      ~step=defaultStep,
      ~offset=defaultOffset
    ) => (s: int) =>
  nearestEvenNumber(float_of_int(base) *. Js.Math.pow_float(~base=ratio,~exp=float_of_int(s - offset) *. step));

let default: int => int = makeScale;
