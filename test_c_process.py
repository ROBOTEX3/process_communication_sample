import subprocess
import time

proc = subprocess.Popen(
    ['./c_process'],
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE,
    shell=True
)

while True:
    proc.stdin.write('check\n')
    print proc.stdout.readline()
    time.sleep(2)
