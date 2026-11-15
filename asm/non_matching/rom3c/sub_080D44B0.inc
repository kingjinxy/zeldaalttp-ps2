	THUMB_FUNC_START sub_080D44B0
sub_080D44B0: @ 0x080D44B0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	ldr r3, _080D44E4  @ =gRam
	ldr r1, _080D44E8  @ =0x00001152
	add r2, r3, r1
	add r2, r4, r2
	mov r1, #31
	and r1, r1, r0
	sub r1, r1, #16
	strb r1, [r2]
	ldr r0, _080D44EC  @ =0x00001142
	add r3, r3, r0
	add r3, r4, r3
	mov r0, #64
	strb r0, [r3]
	add r0, r4, #0
	bl sub_080D44F0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D44E4:
	.4byte gRam
_080D44E8:
	.4byte 0x00001152
_080D44EC:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080D44B0

