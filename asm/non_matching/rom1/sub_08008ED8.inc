	thumb_func_start sub_08008ED8
sub_08008ED8: @ 0x08008ED8
	push {r4, r5, lr}
	ldr r0, _08008F18 @ =0x02000028
	ldr r1, _08008F1C @ =0x03000204
	ldrb r1, [r1]
	ldrb r1, [r0, r1]
	cmp r1, #0
	beq _08008F06
	ldr r0, _08008F20 @ =0x03000204
	ldrb r0, [r0]
	lsls r0, r0, #3
	ldr r5, _08008F24 @ =0x08008F08
	adds r5, r5, r0
	ldr r0, [r5]
	ldr r1, _08008F28 @ =0x02016D90
	ldr r2, _08008F2C @ =sub_08008EFC
	mov lr, r2
	ldr r4, _08008F30 @ =0x03000530
	bx r4

