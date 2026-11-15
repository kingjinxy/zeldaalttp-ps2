	THUMB_FUNC_START sub_0801AC70
sub_0801AC70: @ 0x0801AC70
	push {r4-r7,lr}
	add r4, r0, #0
	ldr r2, _0801ACE0  @ =gUnknown_03006A30
	ldr r7, _0801ACE4  @ =gUnknown_03000E20
	ldrh r0, [r7]
	mov r6, #3
	add r1, r6, #0
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r5, r2, #0
	add r5, r5, #40
	add r0, r0, r5
	ldr r1, [r0]
	add r0, r4, #0
	bl sub_0801B1A0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801ACD8
	mov r0, #3
	strb r0, [r4, #20]
	ldrh r0, [r7]
	add r1, r6, #0
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r5
	ldr r1, [r0]
	str r1, [r4, #88]
	add r0, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	mov r1, #10
	bl 0x08003870
_0801ACD8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801ACE0:
	.4byte gUnknown_03006A30
_0801ACE4:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0801AC70

