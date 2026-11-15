	THUMB_FUNC_START sub_08035C90
sub_08035C90: @ 0x08035C90
	push {r4-r6,lr}
	add r5, r0, #0
	bl GetNextFrame
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _08035CF8
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08035D80
	strb r0, [r5, #21]
	mov r0, #160
	lsl r0, r0, #4
	bl sub_0800D67C
	ldr r3, _08035CF0  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #7
	orr r1, r1, r0
	strb r1, [r3, #4]
	mov r0, #104
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08035D80
	ldr r3, _08035CF4  @ =0xFFDC0000
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	b _08035D80
	.byte 0x00
	.byte 0x00
_08035CF0:
	.4byte gUnknown_02000010
_08035CF4:
	.4byte 0xFFDC0000
_08035CF8:
	ldrb r0, [r5, #21]
	cmp r0, #0
	bne _08035D18
	ldr r0, _08035D14  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _08035D80
	bl sub_0800D644
	mov r0, #1
	strb r0, [r5, #21]
	b _08035D80
_08035D14:
	.4byte gUnknown_02000010
_08035D18:
	mov r2, #0
	ldr r0, _08035D58  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r2, r0
	bcs _08035D42
	ldr r4, _08035D5C  @ =gUnknown_03000940
	mov r6, #128
	lsl r6, r6, #3
	add r3, r0, #0
_08035D2A:
	lsl r0, r2, #1
	add r0, r0, r4
	ldrh r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08035D80
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r3
	bcc _08035D2A
_08035D42:
	mov r0, #105
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	bne _08035D60
	mov r0, #1
	strb r0, [r5, #23]
	b _08035D80
_08035D58:
	.4byte gUnknown_03006C80
_08035D5C:
	.4byte gUnknown_03000940
_08035D60:
	mov r3, #192
	lsl r3, r3, #14
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	str r4, [r5, #88]
	ldr r0, [r5, #84]
	bl DeleteThisEntity
	mov r0, #176
	bl play_sound
	mov r0, #12
	strb r0, [r5, #20]
_08035D80:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035C90

	.byte 0x00
	.byte 0x00
