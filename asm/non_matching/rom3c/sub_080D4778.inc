	THUMB_FUNC_START sub_080D4778
sub_080D4778: @ 0x080D4778
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080D47BC  @ =gRam
	ldr r1, _080D47C0  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080D47A6
	add r1, r0, #0
	add r0, r4, #0
	mov r2, #255
	bl sub_080D4AC4
	ldr r0, _080D47C4  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #8
	strb r0, [r5]
_080D47A6:
	ldr r0, _080D47C8  @ =0x00001809
	add r1, r6, r0
	mov r0, #10
	strb r0, [r1]
	ldr r0, _080D47CC  @ =0x00001770
	add r1, r6, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080D47BC:
	.4byte gRam
_080D47C0:
	.4byte 0x00000FC2
_080D47C4:
	.4byte 0x00000F52
_080D47C8:
	.4byte 0x00001809
_080D47CC:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D4778

