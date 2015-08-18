import sys

with open(sys.argv[1]) as f:
  lines = f.readlines()
  for ln in lines:
    ln = ln.replace("\n", "")
    ln = ln.replace(" ", "")
    rev_ln = ''.join(sorted(ln, reverse=True))

    result = True
    ln_len = len(ln)
    half_ln_len = ln_len/2

    i = 0
    while i < half_ln_len:
      if ln[i] != ln[ln_len-i-1]:
        result = False
        break
      i += 1

    output_result = "YES | "
    if result == False:
      output_result = "NO | "
    output_result += rev_ln
    print output_result
