	THUMB_FUNC_START sub_08134F60
sub_08134F60: @ 0x08134F60
	push {r4-r7,lr}
	add r6, r0, #0
	ldrh r1, [r6, #36]
	cmp r1, #0
	beq _08135022
	ldrh r0, [r6, #38]
	sub r0, r0, #1
	strh r0, [r6, #38]
	ldr r3, _08134FA0  @ =0x0000FFFF
	add r2, r3, #0
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #0
	bne _08135022
	strh r1, [r6, #38]
	ldrh r1, [r6, #40]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08134FA4
	add r0, r1, #0
	add r0, r0, #16
	strh r0, [r6, #40]
	and r0, r0, r2
	cmp r0, #255
	bls _08134FF6
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r6, #40]
	strh r3, [r6, #36]
	b _08134FF6
	.byte 0x00
	.byte 0x00
_08134FA0:
	.4byte 0x0000FFFF
_08134FA4:
	add r0, r1, #0
	sub r0, r0, #16
	strh r0, [r6, #40]
	and r0, r0, r2
	lsl r0, r0, #16
	cmp r0, #0
	bgt _08134FF6
	ldrb r5, [r6, #8]
	ldr r4, [r6, #44]
	cmp r5, #0
	ble _08134FD6
_08134FBA:
	add r0, r6, #0
	add r1, r4, #0
	bl sub_081342DC
	mov r0, #1
	ldrh r7, [r6, #40]
	and r0, r0, r7
	cmp r0, #0
	bne _08134FCE
	strb r0, [r4]
_08134FCE:
	sub r5, r5, #1
	add r4, r4, #80
	cmp r5, #0
	bgt _08134FBA
_08134FD6:
	mov r0, #1
	ldrh r1, [r6, #40]
	and r0, r0, r1
	cmp r0, #0
	beq _08134FEA
	ldr r0, [r6, #4]
	mov r1, #128
	lsl r1, r1, #24
	orr r0, r0, r1
	b _08134FEE
_08134FEA:
	mov r0, #128
	lsl r0, r0, #24
_08134FEE:
	str r0, [r6, #4]
	mov r0, #0
	strh r0, [r6, #36]
	b _08135022
_08134FF6:
	ldrb r5, [r6, #8]
	ldr r4, [r6, #44]
	cmp r5, #0
	ble _08135022
	mov r3, #128
	mov r7, #0
	mov r2, #3
_08135004:
	ldrb r1, [r4]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0813501A
	ldrh r7, [r6, #40]
	lsr r0, r7, #2
	strb r0, [r4, #19]
	add r0, r1, #0
	orr r0, r0, r2
	strb r0, [r4]
_0813501A:
	sub r5, r5, #1
	add r4, r4, #80
	cmp r5, #0
	bgt _08135004
_08135022:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08134F60

