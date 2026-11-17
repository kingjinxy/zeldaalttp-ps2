	THUMB_FUNC_START sub_0801A868
sub_0801A868: @ 0x0801A868
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #100]
	bl sub_08009EA4
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _0801A8B4  @ =gUnknown_08139D54
	add r3, r4, #0
	add r3, r3, #43
	ldrb r0, [r3]
	lsr r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r0, [r4, #44]
	and r0, r0, r1
	cmp r0, #0
	beq _0801A8F4
	add r1, r2, #4
	mov r0, #24
	and r1, r1, r0
	ldrb r3, [r3]
	cmp r1, r3
	bne _0801A8F4
	mov r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _0801A8CE
	ldr r0, [r4, #100]
	mov r2, #54
	ldrsh r1, [r0, r2]
	mov r2, #54
	ldrsh r0, [r4, r2]
	cmp r1, r0
	ble _0801A8B8
	mov r2, #16
	b _0801A8F4
_0801A8B4:
	.4byte gUnknown_08139D54
_0801A8B8:
	cmp r1, r0
	bge _0801A8C0
	mov r2, #0
	b _0801A8F4
_0801A8C0:
	bl sub_0800099C
	mov r1, #16
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _0801A8F4
_0801A8CE:
	ldr r0, [r4, #100]
	mov r2, #50
	ldrsh r1, [r0, r2]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r1, r0
	ble _0801A8E0
	mov r2, #8
	b _0801A8F4
_0801A8E0:
	cmp r1, r0
	bge _0801A8E8
	mov r2, #24
	b _0801A8F4
_0801A8E8:
	bl sub_0800099C
	mov r1, #16
	and r0, r0, r1
	add r0, r0, #8
	add r2, r0, #0
_0801A8F4:
	add r0, r2, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A868

	.byte 0x00
	.byte 0x00
