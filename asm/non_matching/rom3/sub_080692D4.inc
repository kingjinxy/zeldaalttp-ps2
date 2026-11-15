	THUMB_FUNC_START sub_080692D4
sub_080692D4: @ 0x080692D4
	push {r4,lr}
	ldr r4, _08069300  @ =gUnknown_03002780
	ldr r0, _08069304  @ =gUnknown_0814C818
	ldr r1, [r0, #4]
	ldr r0, [r0]
	add r3, r4, #0
	stm r3!, {r0,r1}
	ldr r2, _08069308  @ =0x04000006
	add r0, r4, #0
	add r1, r3, #0
	bl CpuSet
	add r3, r4, #0
	add r3, r3, #32
	add r0, r4, #0
	add r1, r3, #0
	mov r2, #248
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08069300:
	.4byte gUnknown_03002780
_08069304:
	.4byte gUnknown_0814C818
_08069308:
	.4byte 0x04000006
	THUMB_FUNC_END sub_080692D4

