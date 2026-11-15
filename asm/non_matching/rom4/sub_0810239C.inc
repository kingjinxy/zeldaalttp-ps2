	THUMB_FUNC_START sub_0810239C
sub_0810239C: @ 0x0810239C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_08102534
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _081023B8
	b _081024F2
_081023B8:
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _08102438  @ =gRam
	ldr r1, _0810243C  @ =0x00000F52
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _08102490
	cmp r0, #1
	beq _0810245C
	ldr r2, _08102440  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r7, [r0]
	cmp r7, #0
	beq _081023DE
	b _081024F2
_081023DE:
	add r1, r1, #96
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _08102444  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08102448  @ =gUnknown_0817B764
	add r2, r2, #4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810244C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08102450  @ =gUnknown_0817B76C
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _08102454  @ =0x00000EE2
	add r1, r5, r2
	add r1, r4, r1
	add r2, r2, #128
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _081024F2
	ldr r1, _08102458  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #32
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _081024F2
	strb r7, [r6]
	b _081024F2
	.byte 0x00
	.byte 0x00
_08102438:
	.4byte gRam
_0810243C:
	.4byte 0x00000F52
_08102440:
	.4byte 0x00000FC2
_08102444:
	.4byte 0x00000F22
_08102448:
	.4byte gUnknown_0817B764
_0810244C:
	.4byte 0x00000F12
_08102450:
	.4byte gUnknown_0817B76C
_08102454:
	.4byte 0x00000EE2
_08102458:
	.4byte 0x00000ED2
_0810245C:
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102474
	ldr r1, _0810248C  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08102484
_08102474:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r2, _0810248C  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
_08102484:
	add r0, r7, #0
	bl Sprite3_Move
	b _081024F2
_0810248C:
	.4byte 0x00000FC2
_08102490:
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _081024F8  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _081024FC  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _081024C2
	sub r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _081024F2
_081024C2:
	ldr r0, _08102500  @ =0x00000FC2
	add r1, r5, r0
	add r1, r7, r1
	ldr r0, _08102504  @ =gUnknown_0817B774
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r0, _08102508  @ =0x00000F22
	add r1, r5, r0
	add r1, r7, r1
	ldr r0, _0810250C  @ =gUnknown_0817B764
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08102510  @ =0x00000F12
	add r1, r5, r0
	add r1, r7, r1
	ldr r0, _08102514  @ =gUnknown_0817B76C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
_081024F2:
	pop {r4-r7}
	pop {r0}
	bx r0
_081024F8:
	.4byte 0x00000FB2
_081024FC:
	.4byte 0x0000097D
_08102500:
	.4byte 0x00000FC2
_08102504:
	.4byte gUnknown_0817B774
_08102508:
	.4byte 0x00000F22
_0810250C:
	.4byte gUnknown_0817B764
_08102510:
	.4byte 0x00000F12
_08102514:
	.4byte gUnknown_0817B76C
	THUMB_FUNC_END sub_0810239C

