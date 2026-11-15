	THUMB_FUNC_START sub_080260AC
sub_080260AC: @ 0x080260AC
	push {r4,lr}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	ldr r0, _080260E0  @ =0x0000FFFC
	strh r0, [r4, #58]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl 0x08008DD8
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
	add r0, r4, #0
	bl sub_080260E4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080260E0:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_080260AC

