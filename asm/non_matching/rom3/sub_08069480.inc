	THUMB_FUNC_START sub_08069480
sub_08069480: @ 0x08069480
	push {r4,lr}
	sub sp, sp, #12
	ldr r1, _080694D4  @ =0x04000200
	mov r0, #0
	strh r0, [r1]
	mov r4, #0
	str r4, [sp]
	mov r0, sp
	mov r1, #128
	lsl r1, r1, #18
	ldr r2, _080694D8  @ =0x01010000
	bl CpuFastSet
	add r0, sp, #4
	strh r4, [r0]
	ldr r1, _080694DC  @ =gRam
	ldr r2, _080694E0  @ =0x01000DFE
	bl CpuSet
	mov r0, sp
	add r0, r0, #6
	mov r1, #248
	strh r1, [r0]
	mov r1, #192
	lsl r1, r1, #19
	ldr r2, _080694E4  @ =0x0100C000
	bl CpuSet
	str r4, [sp, #8]
	add r0, sp, #8
	mov r1, #224
	lsl r1, r1, #19
	ldr r2, _080694E8  @ =0x01000100
	bl CpuFastSet
	bl sub_08068D60
	add sp, sp, #12
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080694D4:
	.4byte 0x04000200
_080694D8:
	.4byte 0x01010000
_080694DC:
	.4byte gRam
_080694E0:
	.4byte 0x01000DFE
_080694E4:
	.4byte 0x0100C000
_080694E8:
	.4byte 0x01000100
	THUMB_FUNC_END sub_08069480

