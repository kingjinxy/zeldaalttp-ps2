	THUMB_FUNC_START sub_080AA874
sub_080AA874: @ 0x080AA874
	push {lr}
	ldr r1, _080AA8A4  @ =gRam
	ldr r0, _080AA8A8  @ =0x00000A68
	add r2, r1, r0
	mov r0, #64
	strh r0, [r2]
	ldr r0, _080AA8AC  @ =0x00000954
	add r2, r1, r0
	mov r0, #8
	strh r0, [r2]
	ldr r0, _080AA8B0  @ =0x0000095A
	add r1, r1, r0
	mov r0, #4
	strh r0, [r1]
	ldr r0, _080AA8B4  @ =gUnknown_0816B65C
	ldr r1, _080AA8B8  @ =gUnknown_0200B180
	mov r2, #96
	bl CpuFastSet
	bl sub_080AA8BC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA8A4:
	.4byte gRam
_080AA8A8:
	.4byte 0x00000A68
_080AA8AC:
	.4byte 0x00000954
_080AA8B0:
	.4byte 0x0000095A
_080AA8B4:
	.4byte gUnknown_0816B65C
_080AA8B8:
	.4byte gUnknown_0200B180
	THUMB_FUNC_END sub_080AA874

