	THUMB_FUNC_START sub_08069394
sub_08069394: @ 0x08069394
	push {r4,lr}
	sub sp, sp, #16
	ldr r1, _080693F4  @ =0x04000200
	mov r0, #0
	strh r0, [r1]
	mov r4, #0
	str r4, [sp]
	mov r0, sp
	mov r1, #128
	lsl r1, r1, #18
	ldr r2, _080693F8  @ =0x01010000
	bl CpuFastSet
	str r4, [sp, #4]
	add r0, sp, #4
	ldr r1, _080693FC  @ =gUnknown_03000010
	ldr r2, _08069400  @ =0x01001F00
	bl CpuFastSet
	add r0, sp, #8
	mov r1, #248
	strh r1, [r0]
	mov r1, #192
	lsl r1, r1, #19
	ldr r2, _08069404  @ =0x0100C000
	bl CpuSet
	str r4, [sp, #12]
	add r0, sp, #12
	mov r1, #224
	lsl r1, r1, #19
	ldr r2, _08069408  @ =0x01000100
	bl CpuFastSet
	bl sub_08068108
	mov r1, #192
	lsl r1, r1, #18
	mov r0, #1
	strb r0, [r1, #5]
	bl sub_0806929C
	bl sub_08068D60
	add sp, sp, #16
	pop {r4}
	pop {r0}
	bx r0
_080693F4:
	.4byte 0x04000200
_080693F8:
	.4byte 0x01010000
_080693FC:
	.4byte gUnknown_03000010
_08069400:
	.4byte 0x01001F00
_08069404:
	.4byte 0x0100C000
_08069408:
	.4byte 0x01000100
	THUMB_FUNC_END sub_08069394

