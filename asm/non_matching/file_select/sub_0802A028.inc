	THUMB_FUNC_START sub_0802A028
sub_0802A028: @ 0x0802A028
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802A060
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _0802A060
	ldr r0, _0802A098  @ =0x06013000
	ldr r3, _0802A09C  @ =gUnknown_0813D294
	ldrb r2, [r4, #10]
	sub r2, r2, #1
	lsl r1, r2, #2
	add r1, r1, r3
	ldr r3, _0802A0A0  @ =0x03000030
	ldr r1, [r1]
	ldr r3, [r3]
	add r1, r1, r3
	ldr r3, _0802A0A4  @ =gUnknown_0813D29C
	lsl r2, r2, #1
	add r2, r2, r3
	ldrh r2, [r2]
	bl 0x080009F4
_0802A060:
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r4, #16]
	mov r2, #0
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #90
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #120
	mov r0, #120
	strb r0, [r1]
	sub r1, r1, #74
	mov r0, #2
	strb r0, [r1]
	ldrb r1, [r4, #28]
	sub r0, r0, #51
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	add r0, r0, #122
	strb r2, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A098:
	.4byte 0x06013000
_0802A09C:
	.4byte gUnknown_0813D294
_0802A0A0:
	.4byte 0x03000030
_0802A0A4:
	.4byte gUnknown_0813D29C
	THUMB_FUNC_END sub_0802A028

