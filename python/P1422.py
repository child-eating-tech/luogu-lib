s = int(input())
if s > 400:
    print('%.1f' % ((s - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463))
elif s > 150:
    print('%.1f' % ((s - 150) * 0.4663 + 150 * 0.4463))
else:
    print('%.1f' % (s * 0.4463))