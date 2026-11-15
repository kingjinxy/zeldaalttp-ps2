	THUMB_FUNC_START sub_0803668C
sub_0803668C: @ 0x0803668C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strh r1, [r0]
	add r0, r7, #0
	ldr r1, _080366C0  @ =gUnknown_03000FC0
	ldr r2, _080366C4  @ =0x01000044
	bl CpuSet
	mov r0, #0
	bl sub_08036770
	bl sub_0800C41C
	ldr r0, _080366C8  @ =gUnknown_03000BF0
	ldr r1, _080366CC  @ =gUnknown_03000834
	mov r2, #0
	str r2, [r1]
	mov r1, #0
	str r1, [r0]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080366C0:
	.4byte gUnknown_03000FC0
_080366C4:
	.4byte 0x01000044
_080366C8:
	.4byte gUnknown_03000BF0
_080366CC:
	.4byte gUnknown_03000834
	THUMB_FUNC_END sub_0803668C

