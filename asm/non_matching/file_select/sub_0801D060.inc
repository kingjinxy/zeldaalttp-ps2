	THUMB_FUNC_START sub_0801D060
sub_0801D060: @ 0x0801D060
	push {r4-r6,lr}
	add r4, r0, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	add r6, r0, #0
	cmp r6, #0
	beq _0801D07C
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _0801D0F4
_0801D07C:
	add r3, r4, #0
	add r3, r3, #43
	ldrb r5, [r3]
	mov r0, #8
	and r0, r0, r5
	cmp r0, #0
	beq _0801D0B8
	ldrh r1, [r4, #50]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #8
	bne _0801D0B0
	ldrh r0, [r4, #54]
	add r1, r2, #0
	and r1, r1, r0
	cmp r1, #8
	beq _0801D0CC
	mov r0, #4
	strb r0, [r4, #20]
	cmp r1, #7
	bgt _0801D0AC
	mov r0, #16
	b _0801D0F2
_0801D0AC:
	strb r6, [r3]
	b _0801D0F4
_0801D0B0:
	ldrh r1, [r4, #44]
	mov r0, #238
	lsl r0, r0, #8
	b _0801D0E8
_0801D0B8:
	ldrh r0, [r4, #54]
	mov r1, #15
	add r2, r1, #0
	and r2, r2, r0
	cmp r2, #8
	bne _0801D0E4
	ldrh r0, [r4, #50]
	and r1, r1, r0
	cmp r1, #8
	bne _0801D0D4
_0801D0CC:
	add r0, r4, #0
	bl sub_0801D3D8
	b _0801D0F4
_0801D0D4:
	mov r0, #4
	strb r0, [r4, #20]
	cmp r1, #7
	bgt _0801D0E0
	strb r2, [r3]
	b _0801D0F4
_0801D0E0:
	mov r0, #24
	b _0801D0F2
_0801D0E4:
	ldrh r1, [r4, #44]
	mov r0, #238
_0801D0E8:
	and r0, r0, r1
	cmp r0, #0
	beq _0801D0F4
	mov r0, #16
	eor r0, r0, r5
_0801D0F2:
	strb r0, [r3]
_0801D0F4:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D060

	.byte 0x00
	.byte 0x00
