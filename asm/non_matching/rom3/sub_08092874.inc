	THUMB_FUNC_START sub_08092874
sub_08092874: @ 0x08092874
	push {lr}
	ldr r1, _08092894  @ =gUnknown_0815E794
	ldr r0, _08092898  @ =gRam
	ldr r2, _0809289C  @ =0x00000C9A
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, _080928A0  @ =gUnknown_02002F80
	mov r2, #64
	bl CpuSet
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092894:
	.4byte gUnknown_0815E794
_08092898:
	.4byte gRam
_0809289C:
	.4byte 0x00000C9A
_080928A0:
	.4byte gUnknown_02002F80
	THUMB_FUNC_END sub_08092874

