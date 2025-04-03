subject = input()

digital = ['social','history', 'language', 'literacy']
big = ['bigdata', 'public', 'society']

for words in digital:
    if words in subject:
        print('digital humanities')

for words in big:
    if words in subject:
        print('public bigdata')