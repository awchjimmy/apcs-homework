program uva11547;

uses math;

var
  tc, i: integer;
  n, ans: int32;
  rtmp: real;
begin
  readln(tc);
  for i:=1 to tc do
  begin
    readln(n);
    rtmp := 567 * n;
    rtmp := rtmp / 9;
    rtmp := rtmp + 7492;
    rtmp := rtmp * 235;
    rtmp := rtmp / 47;
    rtmp := rtmp - 498;
    // modulus unsigned int to get the right result
    if rtmp > 0 then
      ans := floor(rtmp)
    else
      ans := floor(-1*rtmp);
    ans := floor(ans/10) mod 10;

    writeln(ans);
  end
end.

