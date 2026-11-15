	THUMB_FUNC_START sub_080D47D0
sub_080D47D0: @ 0x080D47D0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D4814  @ =gRam
	ldr r1, _080D4818  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080D47FE
	add r0, r4, #0
	mov r1, #1
	mov r2, #255
	bl sub_080D4AC4
	ldr r1, _080D481C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #16
	strb r0, [r6]
_080D47FE:
	ldr r0, _080D4820  @ =0x00001809
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _080D4824  @ =0x00001770
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4814:
	.4byte gRam
_080D4818:
	.4byte 0x00000FC2
_080D481C:
	.4byte 0x00000F52
_080D4820:
	.4byte 0x00001809
_080D4824:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D47D0

