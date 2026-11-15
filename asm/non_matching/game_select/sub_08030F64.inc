	THUMB_FUNC_START sub_08030F64
sub_08030F64: @ 0x08030F64
	push {r4,r5,lr}
	ldr r5, _08030F7C  @ =gUnknown_03000520
	ldrb r0, [r5]
	cmp r0, #0
	bne _08030FD2
	ldr r4, _08030F80  @ =gUnknown_02016D60
	ldrb r1, [r4]
	cmp r1, #0
	beq _08030F84
	cmp r1, #1
	beq _08030FA0
	b _08030FD2
_08030F7C:
	.4byte gUnknown_03000520
_08030F80:
	.4byte gUnknown_02016D60
_08030F84:
	strb r1, [r5, #7]
	ldr r0, _08030F9C  @ =0x007FFFF0
	str r0, [r5, #12]
	strh r1, [r4, #4]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #0
	bl sub_0800C1EC
	b _08030FD2
	.byte 0x00
	.byte 0x00
_08030F9C:
	.4byte 0x007FFFF0
_08030FA0:
	ldr r0, _08030FD8  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08030FD2
	ldrh r0, [r4, #4]
	add r0, r0, #1
	strh r0, [r4, #4]
	ldrh r0, [r4, #4]
	lsl r0, r0, #4
	bl sub_0800C1EC
	ldrh r0, [r4, #4]
	cmp r0, #6
	bls _08030FD2
	mov r0, #1
	neg r0, r0
	str r0, [r5, #12]
	ldr r1, _08030FDC  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r4]
_08030FD2:
	pop {r4,r5}
	pop {r0}
	bx r0
_08030FD8:
	.4byte gUnknown_03000948
_08030FDC:
	.4byte gSubState
	THUMB_FUNC_END sub_08030F64

