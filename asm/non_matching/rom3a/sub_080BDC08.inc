	THUMB_FUNC_START sub_080BDC08
sub_080BDC08: @ 0x080BDC08
	push {lr}
	sub sp, sp, #4
	bl sub_080B835C
	bl sub_080BB15C
	ldr r1, _080BDC3C  @ =gRam
	ldr r0, _080BDC40  @ =0x0000050C
	add r1, r1, r0
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #2
	add r0, r3, #0
	mov r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	mov r0, sp
	strh r3, [r0]
	ldr r1, _080BDC44  @ =gUnknown_02000C00
	ldr r2, _080BDC48  @ =0x01000200
	bl CpuSet
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDC3C:
	.4byte gRam
_080BDC40:
	.4byte 0x0000050C
_080BDC44:
	.4byte gUnknown_02000C00
_080BDC48:
	.4byte 0x01000200
	THUMB_FUNC_END sub_080BDC08

