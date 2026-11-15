	THUMB_FUNC_START sub_08079F04
sub_08079F04: @ 0x08079F04
	push {r4-r6,lr}
	ldr r0, _08079F80  @ =gRam
	mov r3, #0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	strh r3, [r1]
	add r5, r0, #0
	mov r6, #128
	lsl r6, r6, #8
	add r4, r1, #0
	ldr r0, _08079F84  @ =0x0000199C
	add r2, r5, r0
_08079F1E:
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08079F2E
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_08079F2E:
	add r2, r2, #2
	add r3, r3, #1
	cmp r3, #16
	bne _08079F1E
	mov r3, #1
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #3
	ble _08079F48
	mov r3, #0
_08079F48:
	mov r1, #177
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r2, [r0]
	cmp r3, r2
	beq _08079F78
	mov r1, #0
	strh r3, [r0]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	add r2, r2, #2
	add r0, r5, r2
	strh r1, [r0]
	ldr r0, _08079F88  @ =0x00000504
	add r1, r5, r0
	mov r0, #123
	bl sub_0812A324
	ldr r2, _08079F8C  @ =0x000009AD
	add r1, r5, r2
	mov r0, #5
	strb r0, [r1]
_08079F78:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08079F80:
	.4byte gRam
_08079F84:
	.4byte 0x0000199C
_08079F88:
	.4byte 0x00000504
_08079F8C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08079F04

