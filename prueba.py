import pygame


pygame.init()
Width = 1000
Height = 600
Display = pygame.display.set_mode((Width, Height))
pygame.display.set_caption("Bliper")

Grey1 =(185, 181, 178)
clock=pygame.time.Clock()
Val = False
Init= pygame.image.load("prueba.png")

def cart(x,y):
    Display.blit(Init, (x,y))

x =  (Width * 0.45)
y = (Height * 0.8)
while not Val:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            Val = True
    Display.fill(Grey1)
    cart(x,y)
    pygame.display.update()
    clock.tick(60)

pygame.quit()
quit()
