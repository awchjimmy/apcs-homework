program uva10071;
var
  v, t: Integer;
begin
  repeat
    readln(v, t);
    writeln(Round(2*v * 2*t / 2));
  until EOF();
end.
