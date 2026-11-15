	THUMB_FUNC_START sub_080FB340
sub_080FB340: @ 0x080FB340
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080FB3E0  @ =gRam
	ldr r1, _080FB3E4  @ =0x000010E2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080FB374
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r4]
	ldr r0, _080FB3E8  @ =0x00000FB2
	add r4, r6, r0
	add r4, r5, r4
	mov r0, #3
	and r1, r1, r0
	strb r1, [r4]
	add r0, r5, #0
	bl sub_080C2FA8
	strb r0, [r4]
_080FB374:
	ldr r1, _080FB3E8  @ =0x00000FB2
	add r2, r6, r1
	add r2, r5, r2
	add r1, r1, #240
	add r0, r6, r1
	add r4, r5, r0
	ldrb r1, [r4]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080FB3EC  @ =0x00000F22
	add r2, r6, r0
	add r2, r5, r2
	ldr r0, _080FB3F0  @ =gUnknown_0817A6D4
	add r0, r1, r0
	ldrb r0, [r0]
	mov r7, #0
	strb r0, [r2]
	ldr r0, _080FB3F4  @ =0x00000F12
	add r2, r6, r0
	add r2, r5, r2
	ldr r0, _080FB3F8  @ =gUnknown_0817A6DC
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r1, _080FB3FC  @ =0x00001152
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r6, r1
	add r3, r5, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FB3C8
	strb r7, [r3]
	strb r7, [r2]
_080FB3C8:
	ldrb r0, [r4]
	cmp r0, #0
	beq _080FB408
	ldr r0, _080FB400  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r1, _080FB404  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	b _080FB416
	.byte 0x00
	.byte 0x00
_080FB3E0:
	.4byte gRam
_080FB3E4:
	.4byte 0x000010E2
_080FB3E8:
	.4byte 0x00000FB2
_080FB3EC:
	.4byte 0x00000F22
_080FB3F0:
	.4byte gUnknown_0817A6D4
_080FB3F4:
	.4byte 0x00000F12
_080FB3F8:
	.4byte gUnknown_0817A6DC
_080FB3FC:
	.4byte 0x00001152
_080FB400:
	.4byte 0x00000F92
_080FB404:
	.4byte 0x00000996
_080FB408:
	ldr r0, _080FB444  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r1, _080FB448  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
_080FB416:
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FB44C  @ =gRam
	ldr r0, _080FB450  @ =0x00001032
	add r1, r2, r0
	add r1, r5, r1
	ldrb r3, [r1]
	mov r0, #64
	orr r0, r0, r3
	strb r0, [r1]
	ldr r1, _080FB454  @ =0x00000E75
	add r2, r2, r1
	add r2, r5, r2
	mov r0, #4
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C4F98
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB444:
	.4byte 0x00000F92
_080FB448:
	.4byte 0x00000996
_080FB44C:
	.4byte gRam
_080FB450:
	.4byte 0x00001032
_080FB454:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080FB340

