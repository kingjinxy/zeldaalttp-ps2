	THUMB_FUNC_START sub_0801FC70
sub_0801FC70: @ 0x0801FC70
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r1, [r5, #88]
	cmp r1, #0
	beq _0801FCB8
	bl sub_0803D3D0
	ldr r3, [r5, #88]
	ldr r4, _0801FCC0  @ =gUnknown_0813B4D4
	add r0, r5, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r1, #3
	add r0, r1, #0
	and r0, r0, r2
	lsl r0, r0, #2
	add r2, r5, #0
	add r2, r2, #41
	ldrb r2, [r2]
	and r1, r1, r2
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	str r0, [r3, #72]
	add r3, r3, #60
	ldrb r0, [r3]
	mov r1, #127
	and r1, r1, r0
	add r0, r5, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
_0801FCB8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801FCC0:
	.4byte gUnknown_0813B4D4
	THUMB_FUNC_END sub_0801FC70

