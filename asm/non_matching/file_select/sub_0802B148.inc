	THUMB_FUNC_START sub_0802B148
sub_0802B148: @ 0x0802B148
	push {r4,r5,lr}
	add r5, r0, #0
	add r0, r0, #120
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802B164
	ldr r4, _0802B160  @ =gUnknown_0813D5DC
	bl 0x0800099C
	mov r1, #15
	b _0802B16C
	.byte 0x00
	.byte 0x00
_0802B160:
	.4byte gUnknown_0813D5DC
_0802B164:
	ldr r4, _0802B194  @ =gUnknown_0813D5DC
	bl 0x0800099C
	mov r1, #31
_0802B16C:
	and r1, r1, r0
	add r1, r1, r4
	ldrb r1, [r1]
	cmp r1, #255
	bne _0802B198
	add r1, r5, #0
	add r1, r1, #122
	ldrb r0, [r1]
	cmp r0, #2
	bhi _0802B1F0
	add r0, r0, #1
	strb r0, [r1]
	add r2, r5, #0
	add r2, r2, #120
	ldrb r0, [r2]
	lsl r0, r0, #1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	b _0802B1F0
_0802B194:
	.4byte gUnknown_0813D5DC
_0802B198:
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0802B1F0
	ldr r3, _0802B1F8  @ =gUnknown_0813D5D4
	ldrb r0, [r5, #10]
	lsl r0, r0, #1
	add r1, r0, r3
	mov r2, #0
	ldrsb r2, [r1, r2]
	lsl r2, r2, #16
	add r0, r0, #1
	add r0, r0, r3
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r3, r3, #16
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D4A4
	bl 0x0800099C
	ldrb r2, [r5, #10]
	mov r1, #2
	eor r2, r2, r1
	ldr r3, _0802B1FC  @ =gUnknown_0813D5FC
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r3
	lsl r2, r2, #3
	ldrb r1, [r1]
	add r2, r2, r1
	mov r0, #31
	and r2, r2, r0
	mov r1, #128
	neg r1, r1
	add r0, r1, #0
	add r1, r4, #0
	add r1, r1, #43
	orr r2, r2, r0
	strb r2, [r1]
_0802B1F0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802B1F8:
	.4byte gUnknown_0813D5D4
_0802B1FC:
	.4byte gUnknown_0813D5FC
	THUMB_FUNC_END sub_0802B148

