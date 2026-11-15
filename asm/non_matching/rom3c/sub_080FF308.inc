	THUMB_FUNC_START sub_080FF308
sub_080FF308: @ 0x080FF308
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r10, r5
	ldr r6, _080FF338  @ =gRam
	ldr r0, _080FF33C  @ =gUnknown_030031F2
	add r2, r5, r0
	ldrb r1, [r2]
	add r7, r1, #0
	cmp r7, #0
	beq _080FF344
	cmp r7, #32
	beq _080FF32C
	b _080FF42E
_080FF32C:
	ldr r2, _080FF340  @ =0x00000FD2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	b _080FF42E
	.byte 0x00
	.byte 0x00
_080FF338:
	.4byte gRam
_080FF33C:
	.4byte gUnknown_030031F2
_080FF340:
	.4byte 0x00000FD2
_080FF344:
	ldr r0, _080FF3E4  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #48
	mov r9, r1
	mov r0, r9
	strb r0, [r2]
	ldr r2, _080FF3E8  @ =0x00000F62
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #195
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080FF42E
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080FF3EC  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r2, _080FF3F0  @ =0x00001012
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #160
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080FF3F4  @ =0x00001032
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	add r2, r2, #176
	add r1, r6, r2
	add r1, r4, r1
	add r2, r2, #128
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FF3F8  @ =0x00001122
	add r0, r6, r1
	add r0, r4, r0
	mov r2, #7
	mov r8, r2
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080FF3FC  @ =gUnknown_030031F2
	add r0, r4, r2
	mov r1, r9
	strb r1, [r0]
	ldr r2, _080FF400  @ =0x00000F82
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _080FF404
	bl GetRandomInt
	mov r3, r8
	and r3, r3, r0
	b _080FF410
	.byte 0x00
	.byte 0x00
_080FF3E4:
	.4byte 0x00000F52
_080FF3E8:
	.4byte 0x00000F62
_080FF3EC:
	.4byte 0x00001082
_080FF3F0:
	.4byte 0x00001012
_080FF3F4:
	.4byte 0x00001032
_080FF3F8:
	.4byte 0x00001122
_080FF3FC:
	.4byte gUnknown_030031F2
_080FF400:
	.4byte 0x00000F82
_080FF404:
	strb r7, [r1]
	mov r0, r10
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FF410:
	ldr r2, _080FF43C  @ =gRam
	ldr r0, _080FF440  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080FF444  @ =gUnknown_0817AC44
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FF448  @ =0x00000F12
	add r2, r2, r1
	add r2, r4, r2
	ldr r0, _080FF44C  @ =gUnknown_0817AC4C
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_080FF42E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FF43C:
	.4byte gRam
_080FF440:
	.4byte 0x00000F22
_080FF444:
	.4byte gUnknown_0817AC44
_080FF448:
	.4byte 0x00000F12
_080FF44C:
	.4byte gUnknown_0817AC4C
	THUMB_FUNC_END sub_080FF308

