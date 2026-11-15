	THUMB_FUNC_START sub_0801A11C
sub_0801A11C: @ 0x0801A11C
	push {r4,r5,lr}
	add r3, r0, #0
	add r0, r0, #112
	ldrh r0, [r0]
	mov r5, #7
	and r5, r5, r0
	cmp r5, #0
	bne _0801A1AE
	add r2, r3, #0
	add r2, r2, #116
	mov r1, #0
	ldrsh r0, [r2, r1]
	ldr r1, [r3, #12]
	add r1, r1, r0
	str r1, [r3, #12]
	add r0, r3, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #40
	bls _0801A17C
	ldrh r4, [r2]
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _0801A178  @ =0xFFFFFF00
	cmp r1, r0
	blt _0801A154
	sub r0, r4, #7
	strh r0, [r2]
_0801A154:
	ldr r0, [r3, #12]
	cmp r0, #0
	bgt _0801A1AE
	str r5, [r3, #12]
	mov r0, #63
	strh r0, [r2]
	add r1, r3, #0
	add r1, r1, #114
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801A1AE
	add r0, r3, #0
	bl sub_0801A08C
	b _0801A1AE
_0801A178:
	.4byte 0xFFFFFF00
_0801A17C:
	ldrh r4, [r2]
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _0801A1B4  @ =0xFFFFFF00
	cmp r1, r0
	blt _0801A18C
	sub r0, r4, #7
	strh r0, [r2]
_0801A18C:
	ldr r0, [r3, #12]
	cmp r0, #0
	bgt _0801A1AE
	str r5, [r3, #12]
	mov r0, #63
	strh r0, [r2]
	add r1, r3, #0
	add r1, r1, #114
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801A1AE
	add r0, r3, #0
	bl sub_0801A08C
_0801A1AE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801A1B4:
	.4byte 0xFFFFFF00
	THUMB_FUNC_END sub_0801A11C

