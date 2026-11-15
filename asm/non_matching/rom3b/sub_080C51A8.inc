	THUMB_FUNC_START sub_080C51A8
sub_080C51A8: @ 0x080C51A8
	push {lr}
	bl sub_080AF16C
	ldr r0, _080C51C0  @ =gRam
	ldr r1, _080C51C4  @ =0x00001719
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bl sub_08093078
	pop {r0}
	bx r0
_080C51C0:
	.4byte gRam
_080C51C4:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080C51A8

