	THUMB_FUNC_START sub_08025ACC
sub_08025ACC: @ 0x08025ACC
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, [r5, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _08025B60
	ldr r1, _08025B4C  @ =gUnknown_0813C5A0
	ldrb r0, [r5, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	ldr r4, [r5, #84]
	ldrb r2, [r4, #31]
	lsr r2, r2, #6
	lsl r2, r2, #6
	ldrb r3, [r5, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	orr r0, r0, r2
	strb r0, [r5, #31]
	ldrb r0, [r4, #29]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r2, [r5, #29]
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r5, #29]
	add r4, r4, #80
	ldrh r1, [r4]
	add r0, r5, #0
	add r0, r0, #80
	strh r1, [r0]
	ldrb r0, [r5, #10]
	cmp r0, #0
	beq _08025B66
	ldr r0, [r5, #88]
	ldrb r0, [r0, #20]
	cmp r0, #7
	beq _08025B54
	ldr r0, _08025B50  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #3
	bl __umodsi3
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r0, r0, #1
	ldrb r1, [r5, #10]
	cmp r0, r1
	bne _08025B54
	ldrb r0, [r5, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r5, #28]
	b _08025B66
	.byte 0x00
	.byte 0x00
_08025B4C:
	.4byte gUnknown_0813C5A0
_08025B50:
	.4byte gUnknown_03000E20
_08025B54:
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r5, #28]
	b _08025B66
_08025B60:
	add r0, r5, #0
	bl DeleteThisEntity
_08025B66:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025ACC

