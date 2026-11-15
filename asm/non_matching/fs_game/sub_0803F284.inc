	THUMB_FUNC_START sub_0803F284
sub_0803F284: @ 0x0803F284
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	mov r0, #0
	str r0, [r7]
_0803F28E:
	ldr r0, _0803F29C  @ =gUnknown_03006C80
	ldrb r1, [r0]
	ldr r0, [r7]
	cmp r0, r1
	blt _0803F2A0
	b _0803F3BC
	.byte 0x00
	.byte 0x00
_0803F29C:
	.4byte gUnknown_03006C80
_0803F2A0:
	ldr r0, _0803F31C  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, _0803F31C  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldr r2, _0803F31C  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r4, r2, r3
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #63
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0803F31C  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #3
	beq _0803F320
	ldr r0, _0803F31C  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #4
	beq _0803F320
	b _0803F338
_0803F31C:
	.4byte gUnknown_03006A30
_0803F320:
	ldr r0, _0803F3B8  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_0803F3C4
_0803F338:
	ldr r0, _0803F3B8  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0803F370
	ldr r0, _0803F3B8  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	bl 0x080021EC
_0803F370:
	ldr r0, _0803F3B8  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	ldr r0, [r1]
	cmp r0, #0
	beq _0803F3AE
	ldr r0, _0803F3B8  @ =gUnknown_03006A30
	ldr r1, [r7]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, _0803F3B8  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #44
	add r2, r1, r2
	ldr r1, [r2]
	bl sub_0803F550
_0803F3AE:
	ldr r0, [r7]
	add r1, r0, #1
	str r1, [r7]
	b _0803F28E
	.byte 0x00
	.byte 0x00
_0803F3B8:
	.4byte gUnknown_03006A30
_0803F3BC:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F284

