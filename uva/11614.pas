program uva11614;

Uses math;

var
  tc, i: Integer;
  n: Int64;
begin
  readln(tc);
  for i:=1 to tc do
  begin
    readln(n);
    // Floor
    // Return the largest integer smaller than or equal to argument
    // Errors
    // If x is larger than maxint, an overflow will occur.
    writeln(Floor((-1 + sqrt(1+8*n)) / 2));
  end
end.
