	thumb_func_start sub_08003FB0
sub_08003FB0: @ 0x08003FB0
	ldrb r1, [r0, #0xa]
	lsls r1, r1, #2
	ldr r2, _08004208 @ =0x08000FF4
	ldr r1, [r2, r1]
	ldrh r2, [r1, #0x36]
	ldr r3, _0800420C @ =0x00001A51
	ands r2, r3
	bne _08003FE2
	movs r3, #0x3c
	ldrb r3, [r1, r3]
	cmp r3, #0
	bne _08003FE2
	ldrb r2, [r0, #0x14]
	cmp r2, #0xb
	beq _08003FE2
	cmp r2, #3
	beq _08003FE2
	ldrb r1, [r0, #0xa]
	lsls r1, r1, #1
	ldr r2, _08004210 @ =0x03000940
	ldrh r1, [r2, r1]
	lsrs r1, r1, #0xb
	bhs _08003FE2
	movs r0, #1
	mov pc, lr
_08003FE2:
	movs r0, #0
	mov pc, lr
	.align 2, 0

