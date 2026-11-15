	thumb_func_start sub_08003E24
sub_08003E24: @ 0x08003E24
	eors r2, r2
	movs r3, #0x47
	strb r2, [r0, r3]
	ldr r2, _08003EC4 @ =0x03000840
_08003E2C:
	ldr r3, [r2]
	orrs r3, r3
	beq _08003E3C
	adds r2, #4
	ldr r3, _08003EC8 @ =0x03000940
	cmp r2, r3
	blo _08003E2C
	mov pc, lr
_08003E3C:
	str r0, [r2]
	eors r2, r2
	lsrs r2, r2, #1
	mov pc, lr

