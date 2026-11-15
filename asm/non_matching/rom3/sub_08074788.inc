	THUMB_FUNC_START sub_08074788
sub_08074788: @ 0x08074788
	push {lr}
	bl sub_08069FF4
	ldr r2, _080747AC  @ =gRam
	ldr r1, _080747B0  @ =0x0000099D
	add r0, r2, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	bne _080747A8
	ldr r3, _080747B4  @ =0x000009AD
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #59
	add r0, r2, r3
	strh r1, [r0]
_080747A8:
	pop {r0}
	bx r0
_080747AC:
	.4byte gRam
_080747B0:
	.4byte 0x0000099D
_080747B4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074788

