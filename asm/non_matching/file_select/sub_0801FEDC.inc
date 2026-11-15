	THUMB_FUNC_START sub_0801FEDC
sub_0801FEDC: @ 0x0801FEDC
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08003828
	ldr r0, [r4, #100]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801FEF2
	mov r0, #1
	strb r0, [r4, #23]
_0801FEF2:
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	lsr r0, r0, #3
	add r1, r4, #0
	add r1, r1, #42
	ldrb r2, [r1]
	mov r1, #3
	and r1, r1, r2
	cmp r1, r0
	beq _0801FF18
	mov r0, #1
	strb r0, [r4, #23]
_0801FF18:
	add r0, r4, #0
	bl sub_0801FFBC
	add r2, r4, #0
	add r2, r2, #124
	ldrh r0, [r4, #50]
	ldrh r1, [r2]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r3, r4, #0
	add r3, r3, #126
	cmp r0, #4
	bhi _0801FF46
	ldrh r0, [r4, #54]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #4
	bls _0801FF66
_0801FF46:
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r5, #54
	ldrsh r1, [r4, r5]
	mov r5, #0
	ldrsh r2, [r2, r5]
	mov r5, #0
	ldrsh r3, [r3, r5]
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl 0x0800963C
_0801FF66:
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _0801FF76
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FF96
_0801FF76:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801FF96
	add r0, r4, #0
	bl sub_08020028
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801FF96
	add r0, r4, #0
	bl sub_08020060
_0801FF96:
	ldr r0, [r4, #88]
	cmp r0, #0
	beq _0801FFA2
	add r0, r4, #0
	bl sub_080200A0
_0801FFA2:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FFB4
	add r0, r4, #0
	bl sub_0801FD28
_0801FFB4:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FEDC

	.byte 0x00
	.byte 0x00
